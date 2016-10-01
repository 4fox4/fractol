/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:11:07 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 04:03:42 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init(t_env *e)
{
	e->step_x = 2 / (float)WIDTH;
	e->step_y = 2 / (float)HEIGHT;
	e->center_x = 0;
	e->center_y = 0;
	e->top_x = e->center_x - (WIDTH / 2) * e->step_x;
	e->top_y = e->center_y - (HEIGHT / 2) * e->step_y;
	e->c_r = 0.7;
	e->c_i = -0.38;
	e->mouse = -1;
	e->old_x = -1;
	e->old_y = -1;
	e->iter = 100;
}
