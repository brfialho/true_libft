/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_cut.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:21:06 by brfialho          #+#    #+#             */
/*   Updated: 2026/02/12 22:21:26 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_cut(t_list **head, t_list *node)
{
	t_list	*lst;

	if (*head == node)
	{
		*head = (*head)->next;
		node->next = NULL;
		return (node);
	}
	lst = *head;
	while (lst)
	{
		if (lst->next == node)
		{
			lst->next = NULL;
			node->next = NULL;
			return (node);
		}
		lst = lst->next;
	}
	return (NULL);
}
