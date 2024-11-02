/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:48:40 by bismail           #+#    #+#             */
/*   Updated: 2024/10/27 15:22:59 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (display_error());
	tmp = lst;
	while (lst)
	{
		if ((long)lst->content > (long)tmp->content)
			tmp = lst;
		lst = lst->next;
	}
	return ((long)tmp->content);
}
