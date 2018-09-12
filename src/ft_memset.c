/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:39:15 by mavui             #+#    #+#             */
/*   Updated: 2017/11/16 17:41:32 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	int				i;

	s = (unsigned char*)b;
	i = 0;
	while (len--)
		s[i++] = (unsigned char)c;
	return ((void*)s);
}
