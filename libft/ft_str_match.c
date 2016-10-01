/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_match.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 06:23:19 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 03:28:55 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_str_match(char *str, char *find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && find[j])
	{
		if (find[j] == str[i])
		{
			j++;
			i++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	if (find[j] == '\0')
		return (1);
	else
		return (0);
}
