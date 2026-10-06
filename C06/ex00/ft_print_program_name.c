/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 09:24:45 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/14 09:24:45 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	(void) argc;
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
