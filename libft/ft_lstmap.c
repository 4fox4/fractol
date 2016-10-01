/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houlekhi <houlekhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 05:22:52 by houlekhi          #+#    #+#             */
/*   Updated: 2016/02/19 05:23:20 by houlekhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (*f)(lst);
	if ((new = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
		return (NULL);
	lst = lst->next;
	tmp2 = new;
	while (lst)
	{
		tmp = (*f)(lst);
		if ((tmp2->next = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
			return (NULL);
		lst = lst->next;
		tmp2 = tmp2->next;
	}
	return (new);
}
