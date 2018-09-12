/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:15:58 by mavui             #+#    #+#             */
/*   Updated: 2017/11/14 15:04:19 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current;
	t_list	*new_lst;
	t_list	*tmp;

	tmp = (*f)(lst);
	if (!(current = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	new_lst = current;
	while (lst->next)
	{
		tmp = (*f)(lst->next);
		if (!(current->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		lst = lst->next;
		current = current->next;
	}
	return (new_lst);
}
