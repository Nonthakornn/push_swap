/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:35:08 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 11:55:53 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Return the last node of the list
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
#include "ft_lstnew_bonus.c"
int main()
{
	int value1 = 10;
	int value2 = 20;
	int value3 = 30;

	t_list *node1 = ft_lstnew(&value1);
	t_list *node2 = ft_lstnew(&value2);
	t_list *node3 = ft_lstnew(&value3);

	node1->next = node2;
	node2->next = node3;

	t_list *lastnode = ft_lstlast(node1);
	if (lastnode != NULL)
		printf("Last node: %d", *(int *)(lastnode->content));
	
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/