/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:23:31 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 16:23:31 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/* 
int	main(void)
{
	int	*a;
	int	*b;

	*a = 8;
	*b = 2;
	ft_ultimate_div_mod(a, b);
	printf("a = %d\nb = %d\n", *a, *b);
} */