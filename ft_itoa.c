/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:05:55 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/15 19:58:44 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_number_size(int number)
{
    unsigned int length = 0;

    if (number == 0)
        return 1;

    if (number < 0)
        length += 1;
    while(number != 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

char *ft_itoa(int n)
{
    char *string;
    int number;
    int length;

    number = 0;
    length = ft_number_size(n);
    string = (char *)malloc(sizeof(char) * (length + 1));
    if (n < 0)
    {
        string[0] = '-';
        number = -n;
    }
    else
        number = n;

    if (number == 0)
        string[0] = '0';

    string[length] = '\0';
    while (number != 0)
    {
        string[length - 1] = (number % 10) + '0';
        number = number / 10;
        length--;
    }
    return string;
}