/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 10:49:31 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/04 10:49:31 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = (int *)malloc(length * sizeof(int));
	if (!new_tab)
		return (NULL);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
/* 
int	ft_add_2(int a)
{
	return (a + 2);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = ft_map(tab, 5, &ft_add_2);
	while (i < 5)
	{
		printf("%d\n", new_tab[i]);
		i++;
	}
} */