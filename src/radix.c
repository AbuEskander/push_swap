/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:59:01 by bismail           #+#    #+#             */
/*   Updated: 2024/10/28 09:05:25 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	radix_sort_b(t_list **lsta, t_list **lstb, ...)
{
	int		bitsize;
	int		j;
	va_list	args;
	int		len;

	len = lst_len(*lstb);
	va_start(args, lstb);
	bitsize = va_arg(args, int);
	j = va_arg(args, int);
	while (len-- && j <= bitsize && not_sorted(*lsta))
	{
		if ((((*lstb)->inedx >> j) & 1) == 0)
			rotate(lstb, 0);
		else
			push(lstb, lsta, 1);
	}
	if (!not_sorted(*lsta))
		while (lst_len(*lstb))
			push(lstb, lsta, 1);
	va_end(args);
}

void	radix_sort(t_list **lsta, t_list **lstb)
{
	int	largest_bits;
	int	len;
	int	j;

	largest_bits = 0;
	len = lst_len(*lsta);
	while (len > 1 && ++largest_bits)
		len /= 2;
	j = -1;
	while (++j <= largest_bits)
	{
		len = lst_len(*lsta);
		while (len-- && not_sorted(*lsta))
		{
			if ((((*lsta)->inedx >> j) & 1) == 0)
				push(lsta, lstb, 2);
			else
				rotate(lsta, 1);
		}
		radix_sort_b(lsta, lstb, largest_bits, j + 1);
	}
	while (lst_len(*lstb))
		push(lstb, lsta, 1);
}
