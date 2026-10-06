/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:39:00 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/17 12:39:00 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_create(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*join;

	if (size <= 0)
		count = 1;
	else
	{
		i = 0;
		count = 0;
		while (i < size)
		{
			count += ft_strlen(strs[i]);
			i++;
		}
		count = count + ft_strlen(sep) * (size - 1) + 1;
	}
	join = (char *)malloc(count * sizeof(char));
	if (!join)
		return (0);
	join[0] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	i = 0;
	join = ft_create(size, strs, sep);
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
/* 
int	main(void)
{
	char	*strs[] = {"Isto", "é", "um", "teste"};

	printf("%s\n", ft_strjoin(4, strs, " - "));
} */