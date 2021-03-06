/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:25:13 by tjones            #+#    #+#             */
/*   Updated: 2018/05/29 07:39:48 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') ||
			(c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
