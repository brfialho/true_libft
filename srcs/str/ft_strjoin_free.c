/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 15:20:23 by brfialho          #+#    #+#             */
/*   Updated: 2026/04/09 20:46:31 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	strj_free(char *s, t_bool free_s);

char	*ft_strjoin_free(char *s1, char *s2, t_bool free_s1, t_bool free_s2)
{
	char	*join;
	char	*tmp;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(1, len + 1);
	if (!join)
		return (strj_free(s1, free_s1), strj_free(s2, free_s2), NULL);
	tmp = s1;
	while (*tmp)
		*join++ = *tmp++;
	tmp = s2;
	while (*tmp)
		*join++ = *tmp++;
	if (free_s1)
		free(s1);
	if (free_s2)
		free(s2);
	return (join - len);
}

static void	strj_free(char *s, t_bool free_s)
{
	if (free_s)
		free(s);
}
