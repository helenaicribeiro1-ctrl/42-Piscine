/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 19:16:26 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/11 19:16:26 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void	*res;

	if (!root)
		return (NULL);
	if (res = btree_search_item(root->left, data_ref, cmpf))
		return (res);
	if (!cmpf(data_ref, root->item))
		return (root->item);
	btree_search_item(root->right, data_ref, cmpf);
}
