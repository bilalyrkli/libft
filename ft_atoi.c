/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:44:15 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 23:18:02 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    int i;
    int neg;
    int res;


    i = 0;
    neg = 1;
    res = 0;

    while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (str[i] - '0') + (res * 10);
        i++;
    }
    return(res * neg);
}