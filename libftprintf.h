
#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int ft_puthex_small(unsigned int num);
int ft_puthex_caps(unsigned int num);
int get_size(unsigned int num);
#endif