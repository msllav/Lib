/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:51:42 by mavui             #+#    #+#             */
/*   Updated: 2017/11/13 17:52:13 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
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
		while (needle[j] == haystack[i] && needle[j] != '\0')
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char*)haystack + k);
		i = k;
		i++;
		k++;
	}
	return (NULL);
}
