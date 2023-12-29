/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 02:45:32 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/29 03:00:14 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	else
	{
		while (num > 0 || num < 0)
		{
			num /= 10;
			i++;
		}
		return (i);
	}
}
char	*ft_itoa(int n)
{
	int len;
	char *ptr;
	long nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '/0';
	while (nbr > 0)
	{
		ptr[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		ptr[0] = '-';
	if (n == 0)
		ptr[0] = '0';
	return (ptr);
}