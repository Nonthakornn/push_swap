/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-06 12:08:33 by nchencha          #+#    #+#             */
/*   Updated: 2024-11-06 12:08:33 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_minimum_value(t_list **stack, int val)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->link)
	{
		head = head->link;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

int	find_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->link;
	}
	return (distance);
}

int	max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->link;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

/*
If the largest index is 7 (binary 111)
it would return 3 because three bits(111)
are needed to represent 7.
*/