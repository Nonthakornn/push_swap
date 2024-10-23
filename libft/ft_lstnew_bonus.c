/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:38:20 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/19 21:52:21 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int main()
{
    int value = 10;
    int value2 = 20;
    int value3 = 30;
    t_list *node1 = ft_lstnew(&value);
    t_list *node2 = ft_lstnew(&value2);
    t_list *node3 = ft_lstnew(&value3);

    node1->next= node2; //node1 points to node2
    node2->next = node3; //node2 points to node3

    t_list *ptr = node1;
    while (ptr != NULL)
    {
        printf("%d -> ", *(int *)(ptr->content));
        ptr = ptr->next;
    }
    free(node1);
    free(node2);
    free(node3);
    return (0);
}
*/
