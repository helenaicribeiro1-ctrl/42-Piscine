/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:56:40 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/09 14:56:40 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	fst;
	char	snd;
	char	trd;

	fst = '0';
	while (fst <= '7')
	{
		snd = fst + 1;
		while (snd <= '8')
		{
			trd = snd + 1;
			while (trd <= '9')
			{
				write(1, &fst, 1);
				write(1, &snd, 1);
				write(1, &trd, 1);
				if (!(fst == '7' && snd == '8' && trd == '9'))
					write(1, ", ", 2);
				trd++;
			}
			snd++;
		}
		fst++;
	}
	write(1, "\n", 1);
}
/* 
int	main(void)
{
	ft_print_comb();
	return (0);
} */