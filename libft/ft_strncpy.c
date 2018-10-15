/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:33:51 by tjones            #+#    #+#             */
/*   Updated: 2018/05/28 18:07:17 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			cpy_end;

	i = 0;
	cpy_end = 0;
	while (i < n)
	{
		if (s2[i] && !cpy_end)
			s1[i] = s2[i];
		else
		{
			s1[i] = '\0';
			cpy_end = 1;
		}
		i++;
	}
	return (s1);
}
