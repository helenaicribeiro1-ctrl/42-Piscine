/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:19:54 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/16 16:19:54 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/* 
int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(1, 5);
	i = 0;
	while (range[i])
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
} */