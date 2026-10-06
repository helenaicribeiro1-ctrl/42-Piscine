/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 18:51:18 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/03 18:51:18 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *name)
{
	int		fd;
	int		rd;
	char	buffer;

	fd = open(name, 0);
	if (fd == -1)
		return (0);
	rd = read(fd, &buffer, 1);
	while (rd > 0)
	{
		write(1, &buffer, 1);
		rd = read(fd, &buffer, 1);
	}
	close(fd);
	if (rd == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}
