/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:37:40 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 19:59:06 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *d;
    unsigned char   *s;

    s =(unsigned char *)src;
    d =(unsigned char *)dst;
    if(!dst && !src)
        return(NULL);
    if (dst < src)
        ft_memcpy(dst, src, len);
    else if (dst > src)
    {
        while(len--)
            *(d + len) = *(s + len);
    }
    return (dst);
}