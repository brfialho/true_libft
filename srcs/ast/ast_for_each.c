/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_for_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:09:11 by brfialho          #+#    #+#             */
/*   Updated: 2026/02/12 22:12:30 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ast_for_each(t_ast *root, void (*f)(void *))
{
	if (root == NULL)
		return ;
	ast_for_each(root->left, f);
	ast_for_each(root->right, f);
	f(root->content);
}
