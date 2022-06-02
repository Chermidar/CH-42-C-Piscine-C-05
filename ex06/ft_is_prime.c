/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:11:00 by chermida          #+#    #+#             */
/*   Updated: 2022/06/01 12:11:04 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("El resultado es....: %d\n", ft_is_prime(17));
	return (0);
}
*/