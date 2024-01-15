/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:18:16 by biyurekl          #+#    #+#             */
/*   Updated: 2024/01/15 19:31:46 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
