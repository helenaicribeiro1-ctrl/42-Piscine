/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 23:44:20 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/13 23:44:20 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/* 
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
} */