/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 02:00:46 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 02:02:22 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			mouse_hook(int x, int y, t_env *e)
{
	if (!(x < 0 || y < 0 || x > WIDTH || y > HEIGHT || e->mouse == -1))
	{
		if (e->old_x != x)
			e->c_r += (x - e->old_x) / (HEIGHT * e->step_x * 1000);
		if (e->old_y != y)
			e->c_i += (y - e->old_y) / (HEIGHT * e->step_y * 1000);
	}
	draw(e);
	put_img_to_win(e);
	e->old_x = x;
	e->old_y = y;
	return (0);
}
