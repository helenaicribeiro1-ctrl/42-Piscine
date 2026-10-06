/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 00:38:42 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/14 00:38:42 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/* 
int	main(void)
{
	printf("%d\n", ft_find_next_prime(9));
} */