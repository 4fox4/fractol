/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 13:20:16 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/24 02:36:23 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;
	void	*content_cpy;

	if ((lst = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		if ((content_cpy = malloc(content_size)) == NULL)
		{
			free(lst);
			return (NULL);
		}
		lst->content = ft_memcpy(content_cpy, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
