/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 12:42:14 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/12 12:42:15 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strrchr(char const *s, int c)
{
	int		i;
	int		j;

	j = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char*)(s + j));
	if (c == '\0')
		return ((char*)(s + i));
	return (NULL);
}
