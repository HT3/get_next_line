/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:08:58 by tjones            #+#    #+#             */
/*   Updated: 2018/06/04 11:35:49 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strcpy_c(char *dest, char const *src, char c)
{
	int	decalage;

	decalage = 0;
	while (*src && *src != c)
	{
		*dest = *src;
		++dest;
		++src;
		++decalage;
	}
	*dest = '\0';
	return (decalage);
}

static int		ft_strlen_c(char const *str, char c)
{
	int	len;

	len = 0;
	while (*str && *str != c)
	{
		++str;
		++len;
	}
	return (len);
}

static int		ft_nbstr_c(char const *str, char c)
{
	int	len;

	len = 0;
	while (*str)
	{
		while (*str && *str == c)
			++str;
		if (*str)
			++len;
		while (*str && *str != c)
			++str;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**s1;
	int		i;

	if (!s)
		return (NULL);
	if (!(s1 = (char **)malloc(sizeof(*s1) * (ft_nbstr_c(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s && *s == c)
		++s;
	while (*s)
	{
		if (!(s1[i] = (char *)malloc(sizeof(**s1) * (ft_strlen_c(s, c) + 1))))
			return (NULL);
		s = s + ft_strcpy_c(s1[i], s, c);
		++i;
		while (*s && *s == c)
			++s;
	}
	s1[i] = 0;
	return (s1);
}
