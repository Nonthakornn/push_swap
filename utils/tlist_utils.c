/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlist_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 09:19:37 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-28 09:19:37 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Create a new node
t_list	*ft_lstnew(int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->link = NULL;
	new_node->index = -1;
	new_node->link = NULL;
	return (new_node);
}

//Add node at the beginning of the list
void	ft_lstadd_front(t_list **stack, t_list *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->link = *stack;
	*stack = new_node;
}

//Return the last node
t_list	*ft_lstlast(t_list *stack)
{
	t_list	*ptr;

	ptr = stack;
	if (!stack)
		return (NULL);
	while (ptr->link)
	{
		ptr = ptr->link;
	}
	return (ptr);
}

//Add node at the end of the list
void	ft_lstadd_back(t_list **stack, t_list *new_node)
{
	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	ft_lstlast(*stack)->link = new_node;
}
