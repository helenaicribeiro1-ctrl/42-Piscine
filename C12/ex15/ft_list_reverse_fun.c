/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:58:49 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/09 11:58:49 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*temp;
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		next = list_ptr->next;
		while (next)
		{
			temp = next->data;
			next->data = current->data;
			current->data = data;
			next = next->next;
		}
		current = current->next;
	}
}
