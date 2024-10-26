/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 06:57:45 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-24 06:57:45 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(int value)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;

	return (new_node);
}

void print_list(t_list *head)
{
	t_list *ptr;

	ptr = head;
	while(ptr)
	{
		ft_printf("%d", ptr->value);
		ptr = ptr->next;
	}
}

int main()
{
	t_list *node1;

	node1 = ft_lstnew(2);
	print_list(node1);
}