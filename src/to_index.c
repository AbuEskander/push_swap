/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:22:46 by bismail           #+#    #+#             */
/*   Updated: 2024/10/28 10:54:41 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_list *lsta)
{
	t_list	*tmp;
	t_list	*next;
	int		counter;

	tmp = lsta;
	next = lsta;
	while (next)
	{
		counter = 0;
		tmp = lsta;
		while (tmp)
		{
			if ((long)tmp->content <= (long)next->content)
				counter++;
			tmp = tmp->next;
		}
		next->inedx = counter;
		next = next->next;
	}
}
