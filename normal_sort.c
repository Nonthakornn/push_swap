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

void	normal_sort(t_list **stack_a, t_list **stack_b);
static void sort_3(t_list **stack_a);
static void sort_4(t_list **stack_a, t_list **stack_b);
static void sort_5(t_list **stack_a, t_list **stack_b);

void	normal_sort(t_list **stack_a, t_list **stack_b)
{
	int node_size;

	node_size = ft_lstsize(*stack_a);
	if (check_acended(stack_a) || ft_lstsize(*stack_a) <= 1)
		return ;
	if (node_size == 2)
		sa(stack_a);
	else if (node_size == 3)
		sort_3(stack_a);
	else if (node_size == 4)
		sort_4(stack_a, stack_b);
	else if (node_size == 5)
		sort_5(stack_a, stack_b);
}

static void sort_3(t_list **stack_a)
{
	t_list *head;
	int min_value;
	int next_min;

	head = *stack_a;
	min_value = find_minimum_value(stack_a, -1);
	next_min = find_minimum_value(stack_a, min_value);
	if (check_acended(stack_a))
		return ;
	if (head->index == min_value && head->link->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->link->index == min_value)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (head->link->index == min_value)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

static void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	if (check_acended(stack_a))
		return ;
	distance = find_distance(stack_a, find_minimum_value(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
		rra(stack_a);
	if (check_acended(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

static void sort_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = find_distance(stack_a, find_minimum_value(stack_a, -1));
	if (distance == 1)
		ra(stack_a);
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (distance == 4)
		rra(stack_a);
	if (check_acended(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
