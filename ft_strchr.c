/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:18:16 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 19:59:20 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char* str, int ch)
{
    while(*str)
    {
        if(*str == ch)
            return((char *) str);
        str++;
    }
    if (ch == '\0')
        return((char *)str);
    return (0);
}