/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:44:00 by mavui             #+#    #+#             */
/*   Updated: 2017/11/13 17:44:17 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;
	int				i;

	i = 0;
	new_s = (unsigned char*)s;
	while (n--)
	{
		if (new_s[i] == (unsigned char)c)
			return (new_s + i);
		i++;
	}
	return (NULL);
}
