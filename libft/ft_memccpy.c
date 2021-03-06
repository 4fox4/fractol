/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 10:31:10 by houlekhi          #+#    #+#             */
/*   Updated: 2014/11/22 18:08:32 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst_;
	const char	*src_;

	src_ = src;
	dst_ = dst;
	while (n--)
	{
		if (*src_ == c)
		{
			*dst_++ = *src_++;
			return (dst_);
		}
		*dst_++ = *src_++;
	}
	return (NULL);
}
