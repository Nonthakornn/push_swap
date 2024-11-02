/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printList_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 07:22:34 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-29 07:22:34 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *stack)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = stack;
	while (ptr)
	{
		count++;
		ptr = ptr->link;
	}
	return (count);
}

void	print_list(t_list *stack)
{
	t_list	*ptr;

	ptr = stack;
	while (ptr)
	{
		ft_printf("%d\n", ptr->value);
		ptr = ptr->link;
	}
}

//Delete this one later just checking index
int count_index_nodes(t_list *head)
{
    int count = 0;
    while (head)
    {
        // Count only nodes with a valid (non-negative) index
        if (head->index != -1)
            count++;
        head = head->link;
    }
    return count;
}

//Also Delete this later or Comment
void print_indexed_nodes(t_list *head)
{
    while (head)
    {
        if (head->index != -1) 
        {
            printf("index %d : %d\n", head->index, head->value);
        }
        head = head->link;
    }
}
