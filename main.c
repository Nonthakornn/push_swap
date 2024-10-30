/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 06:50:56 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-24 06:50:56 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;

	if (argc ==  1 || (argc == 2 && !argv[1][0]))
		return (1);
	check_args(argc, argv);
}

/*
// Cheking list (Clean up later)
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = ft_lstnew(1);
	node1 = ft_lstnew(0);
	node2 = ft_lstnew(2);

	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node2);

	ft_printf("Number of Node in list: %d", ft_lstsize(head));


	ft_printf("\nEntire list: ");
	print_list(head); //print entire list

	ft_printf("\nLast Node: ");
	print_list(ft_lstlast(head));
}
*/