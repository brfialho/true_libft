/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:57:12 by brfialho          #+#    #+#             */
/*   Updated: 2026/01/05 21:58:07 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_add_end(t_list **head, t_list *new)
{
	t_list	*lst;

	lst = *head;
	if (!lst)
	{
		*head = new;
		return ;
	}
	lst_last(lst)->next = new;
}
