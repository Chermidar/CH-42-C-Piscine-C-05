/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:55:42 by chermida          #+#    #+#             */
/*   Updated: 2022/06/01 11:55:44 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 0;
	if (nb == 1)
		return (1);
	while (aux <= nb / 2)
	{
		if (aux > 46340)
			return (0);
		if (aux * aux == nb)
			return (aux);
		aux++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("El resultado es....: %d\n", ft_sqrt(2147483647));
	return (0);
}
*/
/*
46340 * 46340 = 2147395600
*/