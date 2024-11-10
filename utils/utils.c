/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 12:58:08 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-28 12:58:08 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str)
{
	(void)str;
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	check_acended(t_list **stack)
{
	t_list	*ptr;

	ptr = *stack;
	while (ptr && ptr->link)
	{
		if (ptr->value > ptr->link->value)
			return (0);
		ptr = ptr->link;
	}
	return (1);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		normal_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	is_whitespace(char *str)
{
	while (*str)
	{
		if (!(*str == 32 || (*str >= 9 && *str <= 13)))
			ft_error("Error");
		str++;
	}
	return (1);
}