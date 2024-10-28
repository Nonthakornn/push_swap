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

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "ft_printf.h"

//Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list*	link;

}t_list;

//Utils
t_list *ft_lstnew(int value);
t_list *ft_lstlast(t_list *stack);
int	ft_lstsize(t_list *stack);
void print_list(t_list *stack);
void ft_lstadd_front(t_list **stack, t_list *new_node);
void ft_lstadd_back(t_list **stack, t_list *new_node);

//Rules




#endif