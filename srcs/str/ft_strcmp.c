/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfialho <brfialho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:11:09 by brfialho          #+#    #+#             */
/*   Updated: 2026/02/27 16:20:28 by brfialho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
// 	ft_strcmp("", ""), 
// 	ft_strcmp("io", ""),
// 	ft_strcmp("", "oi"),
// 	ft_strcmp("hello", "hello"),
// 	ft_strcmp("hell", "hello"),
// 	ft_strcmp("hello", "hell"),
// 	ft_strcmp("aaaaaaa", "hello"),
// 	ft_strcmp("hello", "hello"));
// }