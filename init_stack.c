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

void	init_stack(t_list **stack, int argc, char **argv);
void	assign_index(t_list **stack);
t_list	*find_smallest_node(t_list **stack);

void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new_node;
	char	**tmp_argv;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		tmp_argv = ps_split(argv[i], ' ');
		j = 0;
		while (tmp_argv[j])
		{
			new_node = ft_lstnew(ft_atoi(tmp_argv[j]));
			ft_lstadd_back(stack, new_node);
			j++;
		}
		j = 0;
		while (tmp_argv[j])
		{
			free(tmp_argv[j]);
			j++;
		}
		free(tmp_argv);

		i++;
	}

	assign_index(stack);
}

void	assign_index(t_list **stack)
{
	int		index;
	t_list	*head;

	head = find_smallest_node(stack);
	index = 0;
	while (head)
	{
		head->index = index++;
		head = find_smallest_node(stack);
	}
}

t_list	*find_smallest_node(t_list **stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	while (head)
	{
		if (head->index == -1 && (min == NULL || head->value < min->value))
		{
			min = head;
		}
		head = head->link;
	}
	return (min);
}

/*
void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new_node;
	char	**tmp_argv;
	int		i;

	i = 0;
	if (argc == 2)
		tmp_argv = ps_split(argv[1], ' ');
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
	assign_index(stack);
	if (argc == 2)
		ft_free(tmp_argv);
}

void	assign_index(t_list **stack)
{
	int		index;
	t_list	*head;

	head = find_smallest_node(stack);
	index = 0;
	while (head)
	{
		head->index = index++;
		head = find_smallest_node(stack);
	}
}

t_list	*find_smallest_node(t_list **stack)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *stack;
	while (head)
	{
		if (head->index == -1 && (min == NULL || head->value < min->value))
		{
			min = head;
		}
		head = head->link;
	}
	return (min);
}
*/