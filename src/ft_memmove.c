/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:43:11 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 17:43:48 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *new_src;
	unsigned char *new_dst;

	new_src = (unsigned char*)src;
	new_dst = (unsigned char*)dst;
	if (new_src < new_dst)
	{
		while (len--)
			new_dst[len] = new_src[len];
	}
	else
		ft_memcpy(new_dst, new_src, len);
	return (dst);
}
