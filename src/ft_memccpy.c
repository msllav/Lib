/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:42:13 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 17:42:25 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	size_t			i;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		if (new_src[i] == (unsigned char)c)
			return (new_dst + i + 1);
		i++;
	}
	return (NULL);
}
