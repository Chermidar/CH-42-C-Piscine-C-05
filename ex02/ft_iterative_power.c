/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:40:41 by chermida          #+#    #+#             */
/*   Updated: 2022/06/01 11:40:43 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		aux *= nb;
		power--;
	}
	return (aux);
}

/*
int	main(void)
{
	printf("El resultado es....: %d\n",ft_iterative_power(5, 5));
	return(0);
}
*/