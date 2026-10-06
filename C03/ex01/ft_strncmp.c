/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:35:15 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/11 16:35:15 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 5));
	printf("%d\n", ft_strncmp("Abc", "abc", 2));
	printf("%d\n", ft_strncmp("abc", "abC", 2));
	printf("%d\n", ft_strncmp("abc", "Abc", 0));
} */