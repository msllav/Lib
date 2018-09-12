/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:08:50 by mavui             #+#    #+#             */
/*   Updated: 2017/11/14 14:19:48 by mavui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_s(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

static char		*zero(void)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

static char		*int_min(void)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char) * 12)))
		return (NULL);
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

static char		*convert(int n)
{
	int		i;
	int		neg;
	char	*s;

	neg = 0;
	i = size_s(n);
	if (!(s = (char*)malloc(sizeof(char) * (size_s(n) + 1))))
		return (NULL);
	s[i--] = '\0';
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	while (n)
	{
		s[i--] = (n % 10) + 48;
		n = (n / 10);
	}
	if (neg)
		s[0] = '-';
	return (s);
}

char			*ft_itoa(int n)
{
	char *s;

	if (n == 0)
		s = zero();
	else if (n == -2147483648)
		s = int_min();
	else
		s = convert(n);
	return (s);
}
