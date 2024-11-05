/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 08:08:39 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-24 08:08:39 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap(t_list **stack)
{
	t_list *head;
	t_list *link;
	int tmp_value;
	int tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (1);
	head = *stack;
	link = head->link;
	if (!head && !link)
		ft_error("Error");
	tmp_value = head->value;
	tmp_index = head->index;
	link->value = tmp_value;
	link->index = tmp_index;
	return (0);
}

int sa(t_list **stack_a)
{
	if(swap(stack_a) == 1)
		return (1);
	ft_printf("sa\n");
	return (0);
}

int sb(t_list **stack_b)
{
	if(swap(stack_b) == 1)
		return (1);
	ft_printf("sb\n");
	return (0);
}

int ss(t_list **stack_a, t_list **stack_b)
{
	int nodeA_size;
	int nodeB_size; 
	
	nodeA_size = ft_lstsize(*stack_a);
	nodeB_size = ft_lstsize(*stack_b);

	if (nodeA_size < 2 || nodeB_size < 2)
		return (1);
	swap(stack_b);
	swap(stack_a);
	ft_printf("ss\n");
	return (0);
}