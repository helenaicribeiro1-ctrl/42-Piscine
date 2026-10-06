/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hede-car <hede-car@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:51:23 by hede-car          #+#    #+#             */
/*   Updated: 2026/04/11 18:51:23 by hede-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	if(!node)
		return (NULL);
	node->item = item;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!(*root))
	{
		*root = btree_create_node(item);
		return;
	}
	if (cmpf(item, (*root)->item) < 0)
			btree_insert_data(&((*root)->left), item, cmpf);
	else
			btree_insert_data(&((*root)->right), item, cmpf);	
}
