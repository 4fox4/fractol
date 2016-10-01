/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:21:01 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 04:03:15 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int				ft_mandelbrot(t_env *e, PRECISION r, PRECISION i)
{
	int			n;
	PRECISION	c_r;
	PRECISION	c_i;
	PRECISION	tmp_r;
	PRECISION	tmp_i;

	c_r = r;
	c_i = i;
	n = 0;
	while (n < e->iter && (r * r + i * i < 4))
	{
		tmp_r = (r * r - i * i) + c_r;
		tmp_i = (2 * r * i) + c_i;
		r = tmp_r;
		i = tmp_i;
		++n;
	}
	return (n);
	(void)e;
}

int				ft_julia(t_env *e, PRECISION r, PRECISION i)
{
	int			n;
	PRECISION	tmp_r;
	PRECISION	tmp_i;

	n = 0;
	while (n < e->iter && (r * r + i * i < 4))
	{
		tmp_r = (r * r - i * i) + e->c_r;
		tmp_i = (2 * r * i) + e->c_i;
		r = tmp_r;
		i = tmp_i;
		++n;
	}
	return (n);
}

int				ft_julia_cube(t_env *e, PRECISION r, PRECISION i)
{
	int			n;
	PRECISION	tmp_r;
	PRECISION	tmp_i;

	n = 0;
	while (n < e->iter && (r * r + i * i < 4))
	{
		tmp_r = (r * r - i * i) + e->c_r;
		tmp_i = (3 * r * i) + e->c_i;
		r = tmp_r;
		i = tmp_i;
		++n;
	}
	return (n);
}

int				ft_julia_quad(t_env *e, PRECISION r, PRECISION i)
{
	int			n;
	PRECISION	tmp_r;
	PRECISION	tmp_i;

	n = 0;
	while (n < e->iter && (r * r + i * i < 4))
	{
		tmp_r = (r * r - i * i) + e->c_r;
		tmp_i = (4 * r * i) + e->c_i;
		r = tmp_r;
		i = tmp_i;
		++n;
	}
	return (n);
}

void			draw(t_env *e)
{
	int			color;

	e->top_x = e->center_x - (WIDTH / 2) * e->step_x;
	e->top_y = e->center_y - (HEIGHT / 2) * e->step_y;
	e->pos_y = e->top_y;
	e->y = 0;
	while (e->y < HEIGHT)
	{
		e->pos_x = e->top_x;
		e->x = 0;
		while (e->x < WIDTH)
		{
			color = e->f(e, e->pos_x, e->pos_y);
			put_image(e, e->x, e->y, color);
			e->x++;
			e->pos_x += e->step_x;
		}
		e->y++;
		e->pos_y += e->step_y;
	}
}

/*
** Julia (^ 2)
** Julia (^ 3)
** Julia (^ 4)
** Buddhabrot
** Burning ship
*/
