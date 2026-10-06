/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 10:08:16 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/10 10:08:16 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[60] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(str));
} */