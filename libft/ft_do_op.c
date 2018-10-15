/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:04:35 by tjones            #+#    #+#             */
/*   Updated: 2018/05/31 14:34:06 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_do_op(char *nb1, char *nb2, char *op)
{
	int	n1;
	int	n2;
	int	r;

	n1 = ft_atoi(nb1);
	n2 = ft_atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	return (r);
}
