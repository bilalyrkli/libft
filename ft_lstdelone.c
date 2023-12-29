/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 22:34:52 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/28 23:05:04 by biyurekl         ###   ########.fr       */
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

void    ft_double_arr_free(void *content)
{
    char **arr;
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

#include <stdio.h>

int main(void)
{
	t_list *list;

    char **arr = ft_split("Beni freele yarram", 32);
    
    list = ft_lstnew(arr);

    for (int i = 0; i < 3; i++)
        printf("%s\n", ((char **)(list->content))[i]);
	ft_lstdelone(list, ft_double_arr_free);

	return (0);
}