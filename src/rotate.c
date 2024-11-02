/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 09:39:13 by bismail           #+#    #+#             */
/*   Updated: 2024/10/24 09:56:29 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate(t_list **lst, int whom)
{
	t_list	*last;
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	if (lst_len(*lst) == 1)
		return ;
	tmp = *lst;
	last = ft_lstlast(*lst);
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	ft_lstadd_front(lst, last);
	if (whom == 1)
		ft_printf("rra\n");
	else if (whom == 0)
		ft_printf("rrb\n");
}
