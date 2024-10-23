/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:21:21 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 12:42:01 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*
#include "ft_lstnew_bonus.c"
void del_content(void *content)
{
	free(content);
}
int main()
{
	int *value = malloc(sizeof(int));
	*value = 42;

	t_list *node = ft_lstnew(value);
	if (!node)
	{
		free(value);
		return 1;
	}
	printf("Node before deletion: %d\n", *(int *)(node->content));
	ft_lstdelone(node, del_content);
	printf("Node is deleted");
	return (0);
}
*/