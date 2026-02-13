/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_del_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:03:18 by brfialho          #+#    #+#             */
/*   Updated: 2026/02/12 22:04:18 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ast_del_all_helper(t_ast *root, void (*del)(void *));

void	ast_del_all(t_ast **root, void (*del)(void *))
{
	ast_del_all_helper(*root, del);
	*root = NULL;
}

static void ast_del_all_helper(t_ast *root, void (*del)(void *))
{
	if (root == NULL)
		return ;
	ast_del_all_helper(root->left, del);
	ast_del_all_helper(root->right, del);
	if (del)
		del(root->content);
	free(root);
}
