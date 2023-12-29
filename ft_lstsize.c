/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:57:58 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/28 21:02:51 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t i = 1;

	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}