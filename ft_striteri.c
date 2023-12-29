/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:52:54 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 23:13:27 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int    i;
    if(!s || !f)
        return ;
    i = -1;
    while(s[++i])
        f(i, &s[i]);
}
