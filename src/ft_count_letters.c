/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_letters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:59:47 by mavui             #+#    #+#             */
/*   Updated: 2018/08/27 18:32:12 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_letters(char *s, int i)
{
	int letter;

	letter = 0;
	while (!(ft_isspace(s[i])) && s[i])
	{
		i++;
		letter++;
	}
	return (letter);
}
