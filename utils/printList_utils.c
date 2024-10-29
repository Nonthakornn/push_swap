/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printList_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 07:22:34 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-29 07:22:34 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *stack)
{
	t_list	*ptr;
	int		count;

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