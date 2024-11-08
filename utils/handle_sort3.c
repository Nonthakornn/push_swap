/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_sort3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-08 13:33:37 by nchencha          #+#    #+#             */
/*   Updated: 2024-11-08 13:33:37 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	handle_min_case(t_list **stack_a)
{
	ra(stack_a);
	sa(stack_a);
	rra(stack_a);
}

void	handle_next_min_case(t_list **stack_a, t_list *head, int min_value)
{
	if (head->link->index == min_value)
		sa(stack_a);
	else
		rra(stack_a);
}

void	handle_other_case(t_list **stack_a, t_list *head, int min_value)
{
	if (head->link->index == min_value)
		ra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}
