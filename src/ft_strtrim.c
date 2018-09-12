/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:07:51 by mavui             #+#    #+#             */
/*   Updated: 2017/11/15 14:31:31 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_s;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '\0')
		new_s = ft_strnew(0);
	else
	{
		j = ft_strlen(s) - 1;
		while (ft_isspace(s[j]))
			j--;
		len = j - i + 1;
		if (!(new_s = ft_strsub(s, i, len)))
			return (NULL);
	}
	return (new_s);
}
