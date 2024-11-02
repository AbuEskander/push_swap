/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bismail <bismail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:08:48 by bismail           #+#    #+#             */
/*   Updated: 2024/10/28 11:06:29 by bismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

int		display_error(void);
t_list	*stack_init(char **argv, size_t count, int whom);
void	swap(t_list *stack, int whom);
void	push(t_list **from, t_list **to, int whom);
void	freestack(t_list *lst);
void	rotate(t_list **lst, int whom);
void	revrotate(t_list **lst, int whom);
size_t	lst_len(t_list *lst);
void	sort3(t_list **lst);
void	sort5(t_list **lsta, t_list **lstb);
int		mini(t_list *lst);
int		not_sorted(t_list *lst);
int		max(t_list *lst);
void	pick_move(t_list *item, t_list **lsta, t_list **lstb, int whom);
void	give_index(t_list *lsta);
void	radix_sort(t_list **lsta, t_list **lstb);

#endif