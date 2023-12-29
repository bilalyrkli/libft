/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:15:24 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 19:58:50 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;

    char *b;
    b = (char *)s;

	while (i < n)
	{
		if ((unsigned char)b[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

