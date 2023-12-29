/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:46:48 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/13 14:15:14 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;
    size_t i = -1;

    while (++i < n)
        d[i] = s[i];
    return(dst);
}