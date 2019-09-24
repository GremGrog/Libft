/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmasha-h <fmasha-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:15:40 by fmasha-h          #+#    #+#             */
/*   Updated: 2019/09/24 21:20:26 by fmasha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char *str)
{
	int		i;
	int		w;
	char	*trim;

	if (!str)
		return (-1);
	i = 0;
	w = 0;
	trim = ft_strtrim(str);
	while (trim[i])
	{
		if (trim[i] && ft_isalnum(trim[i]) == 0)
			w++;
		i++;
	}
	free(trim);
	return (++w);
}