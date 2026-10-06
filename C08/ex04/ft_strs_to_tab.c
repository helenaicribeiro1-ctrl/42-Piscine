/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 17:27:39 by hede-car          #+#    #+#             */
/*   Updated: 2026/03/17 17:27:39 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*matrix;

	matrix = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!av[i])
			return (NULL);
		matrix[i].size = ft_strlen(av[i]);
		matrix[i].str = av[i];
		matrix[i].copy = ft_strdup(av[i]);
		if (!matrix[i].copy)
			return (NULL);
		i++;
	}
	matrix[i].str = NULL;
	return (matrix);
}
