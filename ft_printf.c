
#include "libftprintf.h"
#include <stdio.h>
int ft_printf(const char *identifier, ...)
{
    va_list args;
    int i;
    int print_len;

    va_start(args, identifier);
    i = 0;
    print_len = 0;
    while(identifier[i])
    {
        if (identifier[i] == '%')
        {
            if (identifier[i + 1] == 'c')
                print_len += ft_putchar_fd(va_arg(args, int), 1);
            if (identifier[i + 1] == 's')
                print_len += ft_putstr_fd(va_arg(args, char *), 1);
            if (identifier[i + 1] == 'd')
                print_len += ft_putnbr_fd(va_arg(args, int), 1);
            if (identifier[i + 1] == 'x')
                print_len += ft_puthex_small(va_arg(args, unsigned int));
            if (identifier[i + 1] == 'X')
                print_len += ft_puthex_caps(va_arg(args, unsigned int));
            i++;
        }
        else
        {
            write(1, &identifier[i], 1);
            print_len++;
        }
        i++;
    }
    va_end(args);
    return (print_len);
}
int main(void)
{
    ft_printf("%x", 0);
    return 0;
}