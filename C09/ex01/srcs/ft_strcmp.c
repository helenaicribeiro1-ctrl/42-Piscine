/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:17:47 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/11 16:17:47 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("Abc", "abc"));
	printf("%d\n", ft_strcmp("abc", "abC"));
	printf("%d\n", ft_strcmp("abc", ""));
} */