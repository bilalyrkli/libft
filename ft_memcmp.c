/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:35:33 by biyurekl          #+#    #+#             */
/*   Updated: 2024/01/06 03:40:38 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	const unsigned char	*ptr;

	str = ((const unsigned char *)s1);
	ptr = ((const unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (!(str[i] == ptr[i]))
			return (str[i] - ptr[i]);
		i++;
	}
	return (0);
}
