/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 17:00:06 by houlekhi          #+#    #+#             */
/*   Updated: 2016/06/03 06:59:44 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "libft/libft.h"
# include "minilibx_macos/mlx.h"

# include <stdio.h>

# define WIDTH 600
# define HEIGHT 500

# define KEY_LEFT 123
# define KEY_UP 126
# define KEY_RIGHT 124
# define KEY_DOWN 125
# define KEY_MULT 67
# define KEY_PLUS 69
# define KEY_MINUS 78
# define KEY_DIV 75
# define KEY_NUM_0 82
# define KEY_NUM_1 83
# define KEY_NUM_2 84
# define KEY_NUM_3 85
# define KEY_NUM_4 86
# define KEY_NUM_5 87
# define KEY_NUM_6 88
# define KEY_NUM_7 89
# define KEY_NUM_8 91
# define KEY_NUM_9 92

# define PRECISION double

typedef struct		s_env
{
	void			*mlx;
	void			*window;
	void			*img;
	char			*data;
	int				bpp;
	int				size_line;
	int				endian;

	int				x_max;
	int				y_max;
	int				x;
	int				y;

	PRECISION		step_x;
	PRECISION		step_y;
	PRECISION		center_x;
	PRECISION		center_y;
	PRECISION		top_x;
	PRECISION		top_y;
	PRECISION		pos_x;
	PRECISION		pos_y;
	PRECISION		c_r;
	PRECISION		c_i;
	int				old_x;
	int				old_y;
	int				iter;

	int				(*f)(struct s_env *, PRECISION, PRECISION);

	int				mouse;

	int				r;
	int				g;
	int				b;
}					t_env;

void				ft_init(t_env *e);
void				draw(t_env *e);
void				put_image(t_env *e, int x, int y, int color);
int					put_img_to_win(t_env *e);
int					key_hook(int keycode, t_env *e);
int					mouse_hook(int x, int y, t_env *e);
int					mouse_event(int button, int x, int y, t_env *e);
int					ft_error(int error);
int					ft_mandelbrot(t_env *e, PRECISION r, PRECISION i);
int					ft_julia(t_env *e, PRECISION r, PRECISION i);
int					ft_julia_cube(t_env *e, PRECISION r, PRECISION i);
int					ft_julia_quad(t_env *e, PRECISION r, PRECISION i);

#endif
