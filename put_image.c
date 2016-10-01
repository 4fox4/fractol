/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 02:08:01 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/03 06:47:37 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*
** ****************COLORS****************
** e->r = (color & 0xFF0000) >> 16;
** e->g = (color & 0xFF00) >> 8;
** e->b = color & 0xFF;
** **************************************
** e->r = color % 255;
** e->b = (color * 42) % 255;
** e->g = (((color / 5) * 8) + 12) % 255;
** **************************************
** e->r = color % 255;
** e->b = color % 255;
** e->g = color % 255;
** **************************************
** e->r = (color * e->iter) % 255;
** e->b = (color + e->iter) % 255;
** e->g = (color % e->iter) % 255;
** **************************************
*/

void		put_image(t_env *e, int x, int y, int color)
{
	e->r = (color * e->iter) % 255;
	e->b = (color + e->iter) % 255;
	e->g = (color % e->iter) % 255;
	if (x < 0 || x > WIDTH || y < 0 || y > HEIGHT)
		return ;
	*(e->data + y * e->size_line + e->bpp / 8 * x) = e->b;
	*(e->data + y * e->size_line + e->bpp / 8 * x + 1) = e->g;
	*(e->data + y * e->size_line + e->bpp / 8 * x + 2) = e->r;
}
