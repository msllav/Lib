/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:50:03 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 13:21:23 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_src;
	size_t	s_dst;

	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	i = 0;
	if (size < (s_dst + 1))
		return (s_src + size);
	else
	{
		while ((s_dst + i + 1) < size && src[i])
		{
			dst[s_dst + i] = src[i];
			i++;
		}
		dst[s_dst + i] = '\0';
		return (s_dst + s_src);
	}
}
