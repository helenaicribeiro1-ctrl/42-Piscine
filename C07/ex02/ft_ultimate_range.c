/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:13:56 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/17 12:13:56 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
/* 
int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, 3, 8);
	printf("Size: %d\n", size);
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
		free(arr);
	}
} */