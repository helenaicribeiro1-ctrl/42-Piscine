/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:13:49 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 16:13:49 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* 
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 8;
	b = 2;
	ft_div_mod(a, b, div, mod);
	printf("div = %d\nmod = %d\n", *div, *mod);
} */