/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-31 06:52:57 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-31 06:52:57 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_stack(t_list **stack, int argc, char **argv)
{
	t_list *new_node;
	char **tmp_argv;
	int i;

	i = 0;
	if (argc == 2)
		tmp_argv = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp_argv = argv;
	}
	while (tmp_argv[i])
	{
		new_node = ft_lstnew(ft_atoi(tmp_argv[i]));
		ft_lstadd_back(stack, new_node);
		i++;
	}
	if (argc == 2)
		ft_free(tmp_argv);
}