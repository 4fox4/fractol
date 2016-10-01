/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 02:14:40 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 03:27:24 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			ft_error(int error)
{
	if (error == 0)
	{
		ft_putendl("usage: ./fractol <fractal choice>");
		ft_putendl("	mandelbrot");
		ft_putendl("	julia");
		ft_putendl("	julia3");
		ft_putendl("	julia4");
	}
	exit(0);
}
