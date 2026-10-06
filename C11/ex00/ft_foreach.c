/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 10:35:07 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/04 10:35:07 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/* 
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

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 856};

	ft_foreach(tab, 5, ft_putnbr);
} */