/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:05:02 by bismail           #+#    #+#             */
/*   Updated: 2024/10/17 10:49:34 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_sorted(t_list *lst)
{
	while (lst->next)
	{
		if ((long)lst->content > (long)lst->next->content)
			return (1);
		lst = lst->next;
	}
	return (0);
}
