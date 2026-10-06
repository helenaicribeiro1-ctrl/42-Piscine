/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:57:55 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/04 11:57:55 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/* 
int	ft_test(char *str)
{
	if (str == "1")
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[4] = {"0", "1", "2", "1"};
	char	*tab_2[4] = {"as", "bnht", "cad", "asd"};

	printf("%d\n", ft_count_if(tab, 4, ft_test));
	printf("%d\n", ft_count_if(tab_2, 4, ft_test));
}  */