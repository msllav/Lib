/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:14:05 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 13:48:01 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *current;

	if (!(current = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		current->content = NULL;
		current->content_size = 0;
	}
	else
	{
		current->content = ft_strdup(content);
		current->content_size = content_size;
	}
	current->next = NULL;
	return (current);
}
