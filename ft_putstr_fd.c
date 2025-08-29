
#include "libftprintf.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
    while(s[len])
        len++;
	write(fd, s, len);
	return (len);
}
