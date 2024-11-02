/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:57:47 by bismail           #+#    #+#             */
/*   Updated: 2024/10/26 13:31:21 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack, int whom)
{
	long	tmp;

	if (!stack || stack->next == NULL)
		return ;
	tmp = (long)stack->content;
	stack->content = stack->next->content;
	stack->next->content = (void *)tmp;
	tmp = stack->inedx;
	stack->inedx = stack->next->inedx;
	stack->next->inedx = tmp;
	if (whom == 1)
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
}
