/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:36:31 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 08:31:16 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Add the node 'new' at the beginning of the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
//Funciton to print list
void print_list(t_list *head)
{
	t_list *ptr = head;
	while (ptr != NULL)
	{
		// Assume that the content is int
		printf("%d -> ", *(int * )(ptr->content)); 
		ptr = ptr->next;
	}
	printf("NULL\n");
}

#include "ft_lstnew_bonus.c"
int main()
{
	int value1 = 10;
	int value2 = 20;
	int value3 = 30;

	t_list *node1 = ft_lstnew(&value1);
	t_list *node2 = ft_lstnew(&value2);
	t_list *node3 = ft_lstnew(&value3);

	if (node1 == NULL || node2 == NULL || node3 == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	t_list *head = NULL;
	ft_lstadd_front(&head, node1);  // Adding node1 (10)
	ft_lstadd_front(&head, node2);  // Adding node2 (20) to the front
	ft_lstadd_front(&head, node3);  // Adding node3 (30) to the front
	print_list(head);
	free(node1);
	free(node2);
	free(node3);
	return 0;
}
*/