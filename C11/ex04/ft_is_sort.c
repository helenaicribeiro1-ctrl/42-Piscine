/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 12:14:52 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/04 12:14:52 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}
/* 
int	ft_compare(int a, int b)
{
	return (a - b);
}

int main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	int	tab_2[4] = {1, 4, 3, 4};

	printf("%d\n", ft_is_sort(tab, 4, ft_compare));
	printf("%d\n", ft_is_sort(tab_2, 4, ft_compare));
} */