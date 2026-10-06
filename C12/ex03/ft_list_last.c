/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 19:20:26 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 19:20:26 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}
