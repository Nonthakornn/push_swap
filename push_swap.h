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

# include <stdio.h> // Delete this later just use to checking the stage
# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"


//Stack
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list*	link;

}t_list;

//tlist_utils
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *stack);
void	ft_lstadd_front(t_list **stack, t_list *new_node);
void	ft_lstadd_back(t_list **stack, t_list *new_node);

//Print listnode and Size of node 
int	ft_lstsize(t_list *stack);
void	print_list(t_list *stack);

//Check Arguments
void		check_args(int argc, char **argv);

//Init Stack
void init_stack(t_list **stack, int argc, char **argv);

//Utils
void	ft_error(char *str);
void	ft_free(char **str);
//Rules




#endif