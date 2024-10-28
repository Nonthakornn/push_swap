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
void ft_lstadd_front(t_list **stack, t_list *new_node)
{
	new_node->link = *stack;
	*stack = new_node;
}

//Return the last node
t_list	*ft_lstlast(t_list *stack)
{
	t_list *ptr;

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
void ft_lstadd_back(t_list **stack, t_list *new_node)
{
	if (!stack || !new_node)
		return ;
	if (*stack)
		ft_lstlast(*stack)->link = new_node;
	else
		*stack = new_node;
}

int ft_lstsize(t_list *stack)
{
	t_list *ptr;
	int count;

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
		ft_printf("%d ", ptr->value);
		ptr = ptr->link;
	}
}


int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = ft_lstnew(1);
	node1 = ft_lstnew(0);
	node2 = ft_lstnew(2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node2);

	ft_printf("Number of Node in list: %d", ft_lstsize(head));


	ft_printf("\nEntire list: ");
	print_list(head); //print entire list

	ft_printf("\nLast Node: ");
	print_list(ft_lstlast(head));
}
