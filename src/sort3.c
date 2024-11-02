/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:00:53 by bismail           #+#    #+#             */
/*   Updated: 2024/10/28 10:40:09 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **lst)
{
	if ((long)(*lst)->content == (long)mini(*lst)
		&& (long)(*lst)->next->content == (long)max(*lst))
		revrotate(lst, 1);
	else
		while ((long)((ft_lstlast(*lst))->content) != (long)max(*lst))
			rotate(lst, 1);
	if (not_sorted(*lst))
		swap(*lst, 1);
}
