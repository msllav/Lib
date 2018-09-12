/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:52:42 by mavui             #+#    #+#             */
/*   Updated: 2017/11/15 17:35:49 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	k = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i] && needle[j] != '\0' && j != len)
		{
			j++;
			i++;
		}
		if (len < i)
			return (NULL);
		if (needle[j] == '\0')
			return ((char*)haystack + k);
		i = k + 1;
		k++;
	}
	return (NULL);
}
