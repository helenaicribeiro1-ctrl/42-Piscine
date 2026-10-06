/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:16 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/02 12:06:16 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	if (!str || !charset)
		return (NULL);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (!separator(str[i], charset))
		{
			count++;
			while (!separator(str[i], charset) && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*splitter(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !separator(str[i], charset))
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**matrix;
	int		count;
	int		i;
	int		j;

	count = ft_count(str, charset) + 1;
	matrix = (char **)malloc(count * sizeof(char *));
	if (!str || !charset || !matrix)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!separator(str[i], charset))
		{
			matrix[j] = splitter(&str[i], charset);
			while (!separator(str[i], charset) && str[i])
				i++;
			j++;
		}
		else
			i++;
	}
	matrix[j] = NULL;
	return (matrix);
}
/* 
int	main(void)
{
	char	**matrix = ft_split("0a1b2cde3gth013bdf", "0123");
	int		i = 0;
	
	while (matrix[i])
	{
			printf("%s\n", matrix[i]);
			i++;	
	}
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
} */