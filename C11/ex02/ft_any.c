/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 11:03:59 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/04 11:03:59 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
	char	*tab[4] = {"0", "1", "2", NULL};
	char	*tab_2[4] = {"as", "bnht", "cad", NULL};

	printf("%d\n", ft_any(tab, ft_test));
	printf("%d\n", ft_any(tab_2, ft_test));
} */