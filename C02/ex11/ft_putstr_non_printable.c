/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:44:57 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/10 17:44:57 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a1;
	char	a2;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= 31 || str[i] == 127))
			write(1, &str[i], 1);
		else
		{
			a1 = "0123456789abcdef"[str[i] / 16];
			a2 = "0123456789abcdef"[str[i] % 16];
			write(1, "\\", 1);
			write(1, &a1, 1);
			write(1, &a2, 1);
		}
		i++;
	}
}
/* 
int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you?");
} */