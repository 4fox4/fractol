/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 16:57:56 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/02 03:39:52 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		arg_check(t_env *e, char *arg)
{
	if (!ft_strcmp(arg, "mandelbrot"))
		e->f = ft_mandelbrot;
	else if (!ft_strcmp(arg, "julia"))
		e->f = ft_julia;
	else if (!ft_strcmp(arg, "julia3"))
		e->f = ft_julia_cube;
	else if (!ft_strcmp(arg, "julia4"))
		e->f = ft_julia_quad;
	else
		ft_error(0);
}

int				main(int argc, char **argv)
{
	t_env		e;

	if (argc != 2)
		ft_error(0);
	else
		arg_check(&e, argv[1]);
	ft_init(&e);
	e.mlx = mlx_init();
	if (!e.mlx)
		return (1);
	e.window = mlx_new_window(e.mlx, WIDTH, HEIGHT, "Fractol");
	e.img = mlx_new_image(e.mlx, WIDTH, HEIGHT);
	e.data = mlx_get_data_addr(e.img, &e.bpp, &e.size_line, &e.endian);
	draw(&e);
	put_img_to_win(&e);
	mlx_hook(e.window, 2, 3, key_hook, &e);
	mlx_hook(e.window, 6, 1L << 6, mouse_hook, &e);
	mlx_mouse_hook(e.window, mouse_event, &e);
	mlx_expose_hook(e.window, put_img_to_win, &e);
	mlx_loop(e.mlx);
	return (0);
}
