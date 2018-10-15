/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:29:17 by tjones            #+#    #+#             */
/*   Updated: 2018/06/04 14:00:55 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	l_little;
	size_t	l_big;

	if (!*s2)
		return ((char *)s1);
	l_little = ft_strlen(s2);
	l_big = ft_strlen(s1);
	while (*s2 && n >= l_little && l_little <= l_big)
	{
		if (!ft_strncmp(s1, s2, l_little))
			return ((char *)s1);
		--n;
		--l_big;
		++s1;
	}
	return (NULL);
}
