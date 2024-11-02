/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:02:10 by bismail           #+#    #+#             */
/*   Updated: 2024/10/26 14:59:37 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check(char *str)
{
	int	tmp;

	tmp = ft_atoi(str);
	if (total_len(tmp) != ft_strlen(str))
		return (1);
	if (tmp == 0)
		if (*str != '0')
			return (1);
	return (0);
}

static int	check_dup(t_list *lst)
{
	t_list	*tmp;
	t_list	*totlst;

	totlst = lst;
	while (totlst->next)
	{
		tmp = totlst;
		totlst = totlst->next;
		while (lst->next)
		{
			lst = lst->next;
			if ((long)tmp->content == (long)lst->content)
				return (1);
		}
		lst = totlst->next;
	}
	return (0);
}

t_list	*stack_init(char **argv, size_t count, int whom)
{
	t_list	*new_stack;
	size_t	i;
	int		digits;

	i = whom;
	new_stack = NULL;
	while (i < count)
	{
		if (check(argv[i]))
		{
			freestack(new_stack);
			return (NULL);
		}
		digits = ft_atoi(argv[i]);
		ft_lstadd_back(&new_stack, ft_lstnew((void *)(long)digits));
		i++;
	}
	if (check_dup(new_stack))
	{
		freestack(new_stack);
		return (NULL);
	}
	return (new_stack);
}
