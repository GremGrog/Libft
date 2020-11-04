/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_without_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmasha-h <fmasha-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:00:59 by fmasha-h          #+#    #+#             */
/*   Updated: 2019/09/24 21:12:26 by fmasha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_without_spaces(char *str)
{
	int	i;
	int	len;

	if (!str || *str == '\0')
		return (-1);
	i = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (ft_isalnum(str[i]) == 0)
			len--;
		i++;
	}
	return (len);
}
