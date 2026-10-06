/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 23:31:37 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 23:31:37 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("1245"));
	printf("%d\n", ft_str_is_numeric("abcArE"));
	printf("%d\n", ft_str_is_numeric("1234 "));
} */