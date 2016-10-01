/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 12:32:37 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 03:13:41 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_power(float x, int y)
{
	float	tmp;

	if (y == 0)
		return (1);
	tmp = ft_power(x, y / 2);
	if (y % 2 == 0)
		return (tmp * tmp);
	else
	{
		if (y > 0)
			return (x * tmp * tmp);
		else
			return ((tmp * tmp) / x);
	}
}
