/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:35:33 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 19:58:52 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int *b;
    b = (unsigned int *)s1;
    unsigned int *a;
    a = (unsigned int *)s2;
    
    size_t i = 0;

    while(i < n && b[i] == a[i])
        i++;
    if (i < n)
        return(unsigned char)b[i] - (unsigned char)a[i];
    return (0);
}