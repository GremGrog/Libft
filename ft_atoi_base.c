/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmasha-h <fmasha-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:05:40 by fmasha-h          #+#    #+#             */
/*   Updated: 2019/09/25 17:04:59 by fmasha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		scip_syms(const char *str, int i, int base)
{
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	if (str[i] == '0')
	{
		if (str[i + 1] == 'x' || str[i + 1] == 'X')
			i += 2;
		else if (base == 8)
			i++;
	}
	return (i);
}

int		convert_to_base(char sym)
{
	if (sym == 'a' || sym == 'A')
		return (10);
	else if (sym == 'b' || sym == 'B')
		return (11);
	else if (sym == 'c' || sym == 'C')
		return (12);
	else if (sym == 'd' || sym == 'D')
		return (13);
	else if (sym == 'e' || sym == 'E')
		return (14);
	else if (sym == 'f' || sym == 'F')
		return (15);
	else
		return (-1);
}

long	ft_atoi_base(const char *str, int base)
{
	int			sign;
	long		res;
	int			i;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		if (base == 10)
			sign = -1;
		i++;
	}
	i = scip_syms(str, i, base);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && base > 10)
			res = res * base + convert_to_base(str[i++]);
		else
			res = res * base + str[i++] - '0';
	}
	return (sign * res);
}
