/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbline_infile.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 03:34:02 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 03:36:31 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_nbline_infile(char const *str)
{
	int			i;
	int			fd;
	char		*line;

	i = 0;
	if ((fd = open(str, O_RDONLY)) == -1)
		return (-1);
	while (get_next_line(fd, &line) > 0 || line[0] != '\0')
		i++;
	close(fd);
	return (i);
}
