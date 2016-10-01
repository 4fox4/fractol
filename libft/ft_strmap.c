/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 15:32:23 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 01:45:19 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*new_str;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen(s);
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = (*f)(s[i]);
		i++;
	}
	return (new_str);
}
