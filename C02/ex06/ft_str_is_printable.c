/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:40:02 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/10 09:40:02 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("1245"));
	printf("%d\n", ft_str_is_printable("abcArE"));
	printf("%d\n", ft_str_is_printable("ABC\n"));
} */