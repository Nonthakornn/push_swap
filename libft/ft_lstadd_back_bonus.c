/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:00:03 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 12:14:04 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Add new node at the end of the list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
#include "ft_lstnew_bonus.c"
#include "ft_lstlast_bonus.c"
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
int main()
{
    int val1 = 10, val2 = 20, val3 = 30;

    t_list *head = ft_lstnew(&val1);

    t_list *node2 = ft_lstnew(&val2);
    t_list *node3 = ft_lstnew(&val3);

    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    print_list(head);
    return 0;
}
*/
