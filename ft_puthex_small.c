/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:25:37 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/30 19:39:44 by malkilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex_small(unsigned int num)
{
    int mod;
    int len;
    int i;
    char    *str;

    mod = 0;
    len = get_size(num);
    i = len;
    str = malloc(len + 1);
    if (!str)
        return (-1);
    str[i] = 0;
    if (num == 0)
        str[0] = '0';
    while (num > 0)
    {
        mod = num % 16;
        if (mod >= 0 && mod <= 9)
            str[i - 1] = mod + '0';
        else
            str[i - 1] = mod + 'W';
        num /= 16;
        i--;
    }
    write(1, str, len);
    return (len);
}
