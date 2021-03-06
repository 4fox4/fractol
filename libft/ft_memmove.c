/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:00:23 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/13 10:00:24 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_;
	const char	*src_;

	src_ = src;
	dst_ = dst;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	src_ += len;
	dst_ += len;
	while (len--)
		*--dst_ = *--src_;
	return (dst);
}
