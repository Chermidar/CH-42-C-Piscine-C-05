/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:14:00 by chermida          #+#    #+#             */
/*   Updated: 2022/06/01 12:14:02 by chermida         ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	if (ft_sqrt(nb) != 0)
		return (0);
	while (n < nb / n)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}

int	main(void)
{
	printf("El resultado es....: %d\n", ft_find_next_prime(2147483630));
	return (0);
}
