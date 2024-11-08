/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-08 09:40:15 by nchencha          #+#    #+#             */
/*   Updated: 2024-11-08 09:40:15 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list *head;
	int i;
	int j;
	int size;
	int max_bit;

	i = 0;
	head = *stack_a;
	size = ft_lstsize(*stack_a);
	max_bit = max_bits(stack_a);
	while (i < max_bit)
	{
		j = 0;
		while (j < size)
		{
			head = *stack_a;
			if (((head->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

/*
head->index >> i shifts the bits of head->index 
𝑖
i positions to the right, bringing the 
𝑖
i-th bit to the least significant position.
& 1 isolates that least significant bit.
== 1 checks if that bit is 1.
*/