/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:00:27 by mavui             #+#    #+#             */
/*   Updated: 2018/08/21 20:50:04 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;

	if (!(s = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(s, size);
	return ((void*)s);
}
