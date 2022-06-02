/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:16:22 by chermida          #+#    #+#             */
/*   Updated: 2022/06/01 12:16:26 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		aux *= nb;
		nb--;
	}
	return (aux);
}

/*
int	main(void)
{
	printf("El resultado es....: %d\n",ft_iterative_factorial(5));
	return(0);
}
*/
