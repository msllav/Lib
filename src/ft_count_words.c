/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:59:17 by mavui             #+#    #+#             */
/*   Updated: 2017/11/14 17:23:06 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *s)
{
	int word;

	word = 0;
	while (*s)
	{
		while (ft_isspace(*s))
			s++;
		while (!(ft_isspace(*s)) && *s)
			s++;
		while (ft_isspace(*s))
			s++;
		word++;
	}
	return (word);
}
