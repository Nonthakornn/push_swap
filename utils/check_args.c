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
static int	check_duplicate(int num, char **all_args, int i);

static int	check_valid_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-' || num[0] == '+')
		i++;
	if (num[i] == '\0')
		ft_error("Error");
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_duplicate(int num, char **all_args, int i)
{
	i++;
	while (all_args[i])
	{
		if (ft_atoi(all_args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

void	check_args(int argc, char **argv)
{
	int		i, j, token_count;
	long	int_argv;
	char	**split_args;
	char	**all_args;
	int		arg_count = 0;

	token_count = 0;
	i = 1;
	while (i < argc)
	{
		split_args = ps_split(argv[i], ' ');
		j = 0;
		if (split_args[0] == NULL)
		{
			free(split_args[0]);
			free(split_args);
			ft_error("Error");
		}
		while (split_args[j])
		{
			free(split_args[j]);
			token_count++;
			j++;
		}
		free(split_args); 
		i++;
	}

	all_args = (char **)malloc((token_count + 1) * sizeof(char *));
	if (!all_args)
		ft_error("Error");

	i = 1;
	while (i < argc)
	{
		split_args = ps_split(argv[i], ' ');
		j = 0;
		while (split_args[j])
		{
			all_args[arg_count++] = split_args[j];
			j++;
		}
		free(split_args);
		i++;
	}
	all_args[arg_count] = NULL;

	i = 0;
	while (all_args[i])
	{
		int_argv = ft_atoi(all_args[i]);
		if (int_argv < INT_MIN || int_argv > INT_MAX)
			ft_error("Error");
		if (!check_valid_num(all_args[i]))
			ft_error("Error");
		if (check_duplicate(int_argv, all_args, i))
			ft_error("Error");
		i++;
	}
	i = 0;
	while (i < arg_count)
	{
		free(all_args[i]);
		i++;
	}
	free(all_args);
}

/*
void		check_args(int argc, char **argv);
static int	check_valid_num(char *num);
static int	check_duplicate(int num, char **new_argv, int i);

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
*/