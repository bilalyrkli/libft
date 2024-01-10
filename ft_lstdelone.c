/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 22:34:52 by biyurekl          #+#    #+#             */
/*   Updated: 2024/01/05 21:24:57 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_double_arr_free(void *content)
{
	char	**arr;
	size_t	i;

	i = 0;
	arr = (char **)content;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
