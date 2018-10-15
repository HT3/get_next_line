/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:41:28 by tjones            #+#    #+#             */
/*   Updated: 2018/05/22 15:09:14 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		len;

	len = ft_strlen((char *)src);
	while (0 != len && src[len] != (char)c)
		len--;
	if (src[len] == (char)c)
		return ((char *)&src[len]);
	return (NULL);
}
