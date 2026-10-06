/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:32:48 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 20:32:48 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <list.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		free_fct(current->data);
		next = current->next;
		free (current);
		current = next;
	}
}
