/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:04:58 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 13:45:55 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !lst || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include "ft_lstnew_bonus.c"
#include "ft_lstclear_bonus.c"
#include "ft_lstdelone_bonus.c"
#include "ft_lstadd_back_bonus.c"
void *double_content(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (!new_content)
    {
        printf("Error: Memory allocation failed in double_content.\n");
        return NULL;
    }

    *new_content = (*(int *)content) * 2;
    return new_content;
}

void del_content(void *content)
{
    // Free dynamically allocated content
    free(content);
}

int main()
{
    // Create integers for the original list
    int val1 = 10, val2 = 20, val3 = 30;

    // Create the original list nodes
    t_list *node1 = ft_lstnew(&val1);
    t_list *node2 = ft_lstnew(&val2);
    t_list *node3 = ft_lstnew(&val3);

    // Link the nodes together
    node1->next = node2;
    node2->next = node3;

    // Print the original list
    printf("Original list:\n");
    t_list *tmp_orig = node1;
    while (tmp_orig)
    {
        printf("%d\n", *(int *)tmp_orig->content);
        tmp_orig = tmp_orig->next;
    }

    // Create a new list with doubled content
    t_list *new_list = ft_lstmap(node1, double_content, del_content);
    if (!new_list)
    {
        printf("Error: ft_lstmap failed.\n");
        return 1;
    }

    // Print the new list
    printf("New list (doubled values):\n");
    t_list *tmp_new = new_list;
    while (tmp_new)
    {
        printf("%d\n", *(int *)tmp_new->content);
        tmp_new = tmp_new->next;
    }

    printf("Cleaning up new list...\n");
    ft_lstclear(&new_list, del_content);  

    printf("Cleaning up original list...\n");
    ft_lstdelone(node1, NULL); 
    ft_lstdelone(node2, NULL);
    ft_lstdelone(node3, NULL);

    printf("Cleanup complete.\n");
    return 0;
}
*/