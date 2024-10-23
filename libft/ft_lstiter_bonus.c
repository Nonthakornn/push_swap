/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:48:34 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 12:59:42 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst)
		return ;
	list_ptr = lst;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}

/*
#include "ft_lstnew_bonus.c"
void print_content(void *content)
{
	printf("%d\n", *(int *)content);  // Assuming the content is an integer
}

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

	ft_lstiter(node1, print_content);

	free(node1);
	free(node2);
	free(node3);
	return 0;
}
*/