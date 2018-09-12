/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:46:37 by mavui             #+#    #+#             */
/*   Updated: 2017/11/13 17:46:52 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char*)s1;
	new_s2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	return (0);
}
