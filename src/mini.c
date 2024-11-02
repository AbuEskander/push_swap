/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:34:01 by bismail           #+#    #+#             */
/*   Updated: 2024/10/17 10:45:18 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	mini(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (display_error());
	tmp = lst;
	while (lst)
	{
		if ((long)lst->content < (long)tmp->content)
			tmp = lst;
		lst = lst->next;
	}
	return ((long)tmp->content);
}
