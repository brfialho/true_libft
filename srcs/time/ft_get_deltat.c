/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_deltat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:33:16 by brfialho          #+#    #+#             */
/*   Updated: 2026/04/06 13:34:55 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_get_deltat(struct timeval *start)
{
	struct timeval	end;

	gettimeofday(&end, NULL);
	return ((end.tv_sec - start->tv_sec) * 1000000
		+ end.tv_usec - start->tv_usec);
}
