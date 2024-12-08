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

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	check_args(argc, argv);
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (check_acended(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}

/*
// ok_input
4 +2 5 1
"4" +2 5 "1"
"  4  " " +2 " "5    1"
42 "1 7" 9 "  25   10 "
00000 +0002 -2222 "+0000009     -000009"
2147483647 "-2147483648 00000000000000000000000001 +002 -002"
*/

/*
valgrind --leak-check=full --show-leak-kinds=all ./push_swap ""
*/

/*
print_list in stack
	print_list(*stack_a); //Delete later
	printf("\nIndex node in stack_a:\n"); // Delete later
	print_indexed_nodes(*stack_a); // Delete later
*/

/*
Checking linklist
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