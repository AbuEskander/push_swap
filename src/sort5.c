/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:41:46 by bismail           #+#    #+#             */
/*   Updated: 2024/10/26 14:11:39 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_list **lsta, t_list **lstb)
{
	while (lst_len(*lsta) != 3)
	{
		if ((long)(*lsta)->content == (long)mini(*lsta))
			push(lsta, lstb, 2);
		else if ((long)ft_lstlast(*lsta)->content == (long)mini(*lsta))
			revrotate(lsta, 1);
		else
			rotate(lsta, 1);
	}
	sort3(lsta);
	while (*lstb)
		push(lstb, lsta, 1);
}
