/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:38:12 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/13 20:38:12 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char		a;

	n = nb;
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		a = n + '0';
		write(1, &a, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/* 
int	main(void)
{
	ft_putnbr(-12345);
} */