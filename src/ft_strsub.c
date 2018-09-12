/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:06 by mavui             #+#    #+#             */
/*   Updated: 2018/08/21 20:59:02 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	unsigned int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(new_s = ft_memalloc(len + 1)))
		return (NULL);
	while (i < len && s[start])
		new_s[i++] = s[start++];
	new_s[i] = '\0';
	return (new_s);
}
