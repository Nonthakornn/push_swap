/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 06:40:34 by nchencha          #+#    #+#             */
/*   Updated: 2024-11-05 06:40:34 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normal_sort(t_list **stack_a, t_list **stack_b)
{
	int node_size;

	node_size = ft_lstsize(*stack_a);
	if (check_acended(stack_a) || ft_lstsize(*stack_a) <= 1)
		return ;
	if (node_size == 2)
		sa(stack_a);
// 	else if (node_size == 3)
// 		sort_3(stack_a);
// 	else if (node_size == 4)
// 		sort_4(stack_a, stack_b);
// 	else if (node_size == 5)
// 		sort_5(stack_a, stack_b);
}

/*
static int find_minimum_value(t_list **stack, int val)
{
	t_list *head;
	int min;

	head = *stack;
	if (!head)
		return (1);
	min = head->index;
	while (head)
	{
		if ((head->index < min) && head->index != val)
			min = head->index;
		head = head->link;
	}
	return (min);
}

static void sort_3(t_list **stack_a)
{
}

static void sort_4(t_list **stack_a, t_list **stack_b);
static void sort_5(t_list **stack_a, t_list **stack_b);
*/