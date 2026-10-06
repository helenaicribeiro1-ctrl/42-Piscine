/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:28:47 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 21:28:47 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if (cmp(list_ptr->data, data_ref) == 0)
			f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
