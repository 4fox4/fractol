/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_event.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 02:02:03 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 03:39:32 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_event(int button, int x, int y, t_env *e)
{
	if (button == 6)
	{
		e->step_x *= 1.1;
		e->step_y *= 1.1;
		e->center_x -= (x - WIDTH / 2) * e->step_x / 5;
		e->center_y -= (y - HEIGHT / 2) * e->step_y / 5;
	}
	else if (button == 7)
	{
		e->step_x /= 1.1;
		e->step_y /= 1.1;
		e->center_x += (x - WIDTH / 2) * e->step_x / 5;
		e->center_y += (y - HEIGHT / 2) * e->step_y / 5;
	}
	draw(e);
	put_img_to_win(e);
	return (0);
}
