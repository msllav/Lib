/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:05:08 by mavui             #+#    #+#             */
/*   Updated: 2017/11/13 18:05:25 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (!(new_s = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = (*f)(s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
