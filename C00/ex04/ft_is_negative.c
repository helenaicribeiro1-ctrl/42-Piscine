/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:47:13 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 14:47:13 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/* 
int	main(void)
{
	ft_is_negative(2);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	ft_is_negative(-2);
	write(1, "\n", 1);
} */