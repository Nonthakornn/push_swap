/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 12:33:43 by nchencha          #+#    #+#             */
/*   Updated: 2024-10-30 12:33:43 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		check_args(int argc, char **argv);
static int	check_valid_num(char *num);
static int	check_duplicate(int num, char **new_argv, int i);

/*
Validate command line artguments
- Handle differnt input formats
- Handle memory management
- Checks if the input contains valid numbers
- Check if the input has duplicate or number out of valid range
*/
static int	check_valid_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' && num[1] == '\0')
		ft_error("Error");
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_duplicate(int num, char **new_argv, int i)
{
	i++;
	while (new_argv[i])
	{
		if (ft_atoi(new_argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

void	check_args(int argc, char **argv)
{
	int		i;
	long	int_argv;
	char	**new_argv;

	i = 0;
	if (argc == 2)
		new_argv = ps_split(argv[1], ' ');
	else
	{
		i = 1;
		new_argv = argv;
	}
	while (new_argv[i])
	{
		int_argv = ft_atoi(new_argv[i]);
		if (int_argv < INT_MIN || int_argv > INT_MAX)
			ft_error("Error");
		if (!check_valid_num(new_argv[i]))
			ft_error("Error");
		if (check_duplicate(int_argv, new_argv, i))
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free(new_argv);
}
