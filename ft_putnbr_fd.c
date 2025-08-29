
#include "libftprintf.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		len += write(fd, "-", 1);
	}
	if (n == 0)
		len += ft_putchar_fd('0', 1);
	if (n > 0)
	{
		if (n >= 10)
			len += ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		len += write(fd, &c, 1);
	}
	return (len);
}
