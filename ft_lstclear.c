/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biyurekl <biyurekl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 23:27:01 by biyurekl          #+#    #+#             */
/*   Updated: 2023/12/28 23:31:46 by biyurekl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *arr;

    if(!lst || !del)
        return ;
    while (*lst != 0)
    {
        arr = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst) = arr;
    }
    *lst = 0;
}