/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:36:41 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 23:18:00 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t b;
    void    *p;

    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    b = count * size;
    p = malloc(b);
    if (p == NULL)
        return(NULL);
    else
        ft_bzero(p,b);
    return(p);
}