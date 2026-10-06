/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:46:26 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/08 20:46:26 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr > 0 && begin_list != NULL)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}
