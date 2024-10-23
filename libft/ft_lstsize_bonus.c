/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:27:14 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/21 08:41:36 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Counts the number of nodes in a list.
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/*
#include "ft_lstnew_bonus.c"
int main()
{
	int value1 = 10;
	int value2 = 20;
	
	t_list *node1 = ft_lstnew(&value1);
	t_list *node2 = ft_lstnew(&value2);

	node1->next = node2;

	int size = ft_lstsize(node1);
	printf("Size: %d\n", size);

	free(node1);
	free(node2);
	return (0);
}
*/