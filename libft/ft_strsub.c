/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:02:35 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 01:47:49 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	if (s == NULL)
		return (NULL);
	dest = ft_strnew(len);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
			dest[i - start] = s[i];
		i++;
	}
	return (dest);
}
