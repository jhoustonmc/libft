/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:41:27 by sconstab          #+#    #+#             */
/*   Updated: 2019/06/19 09:05:05 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int c;

	c = 0;
	if (n < 0)
	{
		n = n * -1;
		c++;
	}
	while (n >= 1)
	{
		n = n / 10;
		c++;
	}
	return (c);
}
