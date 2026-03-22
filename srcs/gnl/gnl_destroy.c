/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:42:06 by brfialho          #+#    #+#             */
/*   Updated: 2026/03/21 21:43:50 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	gnl_destroy(int fd)
{
	char	*s;

	s = get_next_line(fd);
	while (s)
	{
		free(s);
		s = get_next_line(fd);
	}
}
