SRC = fractol.c key_hook.c mouse_hook.c mouse_event.c draw.c ft_init.c \
		put_img_to_win.c put_image.c error.c

OBJ = $(SRC:.c=.o)

LIB = libft/libft.a

LIBMLX = minilibx_macos/libmlx.a

INC = libft/includes/

MLX = minilibx/

NAME = fractol

FLAGS = -Wall -Wextra -Werror

XFLAG = -framework OpenGL -framework AppKit

CC = clang

all: libft mlx $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^ $(XFLAG) $(LIB) $(LIBMLX)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

mlx:
	make -C minilibx_macos/

libft:
	make -C libft/

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: libft