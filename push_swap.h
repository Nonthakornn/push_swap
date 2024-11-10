/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 13:58:42 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-23 13:58:42 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

//Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*link;

}				t_list;

//tlist_utils
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *stack);
void	ft_lstadd_front(t_list **stack, t_list *new_node);
void	ft_lstadd_back(t_list **stack, t_list *new_node);
void	free_stack(t_list **stack);

//Print listnode and Size of node 
int		ft_lstsize(t_list *stack);
void	print_list(t_list *stack);

//split
char	**ps_split(char *s, char c);
int		word_count(char *str, char c);
//void	free_array(char **str_array, int count);

//Check Arguments & node and args utils
void	check_args(int argc, char **argv);
int		check_acended(t_list **stack);
// int	count_tokens(int argc, char **argv);
// char	**populate_args(int argc, char **argv, int token_count);

//Init Stack
void	init_stack(t_list **stack, int argc, char **argv);
void	assign_index(t_list **stack);
t_list	*find_smallest_node(t_list **stack);

//Utils
void	ft_error(char *str);
void	ft_free(char **str);
int		is_whitespace(char *str);

//Sort Stack 
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	normal_sort(t_list **stack_a, t_list **stack_b);
void	handle_min_case(t_list **stack_a);
void	handle_next_min_case(t_list**stack_a, t_list *head, int min_value);
void	handle_other_case(t_list **stack_a, t_list *head, int min_value);
int		find_minimum_value(t_list **stack, int val);
int		find_distance(t_list **stack, int index);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		max_bits(t_list **stack);

//Rules
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);

int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif

/*
Function use to check for debugging
	int count_index_nodes(t_list *head);
	void print_indexed_nodes(t_list *head);
int		count_index_nodes(t_list *head);
void	print_indexed_nodes(t_list *head);
*/