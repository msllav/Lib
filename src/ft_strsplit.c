/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:08:25 by mavui             #+#    #+#             */
/*   Updated: 2017/11/15 11:35:37 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *s, char c)
{
	int word;
	int i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while ((s[i] == c) && s[i])
			++i;
		while ((s[i] != c) && s[i])
			++i;
		while ((s[i] == c) && s[i])
			++i;
		word++;
	}
	return (word);
}

static int		count_letters(char *s, unsigned int i, char c)
{
	int letter;

	letter = 0;
	while ((s[i] != c) && s[i])
	{
		i++;
		letter++;
	}
	return (letter);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**new_s;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(new_s = (char**)malloc(sizeof(char*) * count_words((char*)s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			new_s[j++] = ft_strsub(s, i, (size_t)count_letters((char*)s, i, c));
			i = i + count_letters((char*)s, i, c);
		}
		if (s[i])
			i++;
	}
	new_s[j] = 0;
	return (new_s);
}
