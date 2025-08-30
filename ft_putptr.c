
#include <unistd.h>

int ft_putptr(void *ptr)
{
    write(1, ptr, 16);
    return (16);
}

int main(void)
{
    void *ptr;
    int a;

    a = 4;
    ptr = &a;
    ft_putptr(ptr);
    return (0);
}