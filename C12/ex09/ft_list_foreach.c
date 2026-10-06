/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:17:31 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 21:17:31 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
