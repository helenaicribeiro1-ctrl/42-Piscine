/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 23:35:20 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 23:35:20 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("1245"));
	printf("%d\n", ft_str_is_lowercase("abcArE"));
	printf("%d\n", ft_str_is_lowercase("abc"));
} */