/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:19:38 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/03 07:04:22 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		translate(t_env *e, int keycode)
{
	if (keycode == KEY_LEFT)
		e->center_x += e->step_x;
	else if (keycode == KEY_RIGHT)
		e->center_x -= e->step_x;
	else if (keycode == KEY_DOWN)
		e->center_y -= e->step_y;
	else if (keycode == KEY_UP)
		e->center_y += e->step_y;
}

int				key_hook(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 46)
		e->mouse *= -1;
	else if (keycode >= KEY_LEFT && keycode <= KEY_UP)
		translate(e, keycode);
	else if (keycode == 8)
	{
		e->center_x = 0;
		e->center_y = 0;
	}
	else if (keycode == KEY_MINUS && e->iter >= 10)
		e->iter -= 5;
	else if (keycode == KEY_PLUS && e->iter <= 5000)
		e->iter += 5;
	draw(e);
	put_img_to_win(e);
	return (0);
}
