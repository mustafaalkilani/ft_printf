/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_caps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malkilan <malkilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:26:09 by malkilan          #+#    #+#             */
/*   Updated: 2025/08/31 19:50:53 by malkilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_size(unsigned long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex_caps(unsigned int num)
{
	int		mod;
	int		len;
	int		i;
	char	*str;

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
			str[i - 1] = mod + '7';
		num /= 16;
		i--;
	}
	write(1, str, len);
	free(str);
	return (len);
}
