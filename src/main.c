/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:08:14 by bismail           #+#    #+#             */
/*   Updated: 2024/10/27 15:39:01 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_switch(t_list **lsta, t_list **lstb)
{
	if (lst_len(*lsta) <= 5)
		sort5(lsta, lstb);
	else
		radix_sort(lsta, lstb);
}

static void	freeexit(t_list *total, char **left, size_t counts)
{
	if (total)
		freestack(total);
	if (left)
		freesplited(left, counts);
}

int	main(int argc, char **argv)
{
	t_list	*stack;
	t_list	*stack2;
	char	**conf;

	stack = NULL;
	stack2 = NULL;
	conf = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		conf = ft_split(argv[1], ' ');
		stack = stack_init(conf, count_words(argv[1], ' '), 0);
	}
	else
		stack = stack_init(argv, argc, 1);
	if (!stack)
	{
		freeexit(stack, conf, count_words(argv[1], ' '));
		return (display_error());
	}
	give_index(stack);
	if (not_sorted(stack))
		sort_switch(&stack, &stack2);
	freeexit(stack, conf, count_words(argv[1], ' '));
}

/*
	We should find the minimumem,
		We can use index to find it's position. How?????

	void* 8 byte
	long 8 byte
*/