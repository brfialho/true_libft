/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 20:06:00 by brfialho          #+#    #+#             */
/*   Updated: 2026/04/09 20:32:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t size)
{
	void	*new;

	if (!ptr)
		return (malloc(size));
	if (!size)
		return (free(ptr), NULL);

	new = malloc(size);
	if (!new)
		return (NULL);
	size = size * (size <= old_size) + old_size * (old_size < size);
	ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
