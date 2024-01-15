/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:15:24 by biyurekl          #+#    #+#             */
/*   Updated: 2024/01/15 19:20:49 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (i < n)
	{
		if ((unsigned char)b[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
