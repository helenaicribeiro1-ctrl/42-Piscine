/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:52:33 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/12 11:52:33 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (j >= size)
		return (i + size);
	k = 0;
	while (src[k] && k + j + 1 < size)
	{
		dest[j + k] = src[k];
		k++;
	}
	dest [j + k] = '\0';
	return (i + j);
}
/* 
int	main(void)
{
	char	*src = "World!";
	char	dest[10] = "Hello ";

	printf("%d\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
}  */