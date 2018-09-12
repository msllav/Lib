/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:41:22 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 17:41:10 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	int				i;

	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (new_dst);
}
