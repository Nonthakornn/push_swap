/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:25:02 by nchencha          #+#    #+#             */
/*   Updated: 2024/10/06 20:03:01 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	unsigned int	count;
	long			nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_print_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		count += ft_print_int(nb / 10);
		count += ft_print_int(nb % 10);
	}
	else
		count += ft_print_char(nb + '0');
	return (count);
}

//Non-tail recursive
/*
int	ft_print_int(int n)
{
	unsigned int	count;
	long			nbr;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		ft_print_char('-');
		nbr = -nbr;
		count++;
	}
	if (nbr > 9)
		count += ft_print_int(nbr / 10);
	ft_print_char(nbr % 10 + '0');
	count++;
	return (count);
}
*/

/*
#include "ft_print_char.c"
int main()
{
	ft_print_int(-2147483648);
	write(1, "\n", 1);

	ft_print_int(2147483647);
	write(1, "\n", 1);

	ft_print_int(-123);
	write(1, "\n", 1);

	// ft_print_int(2147483648);
	// write(1, "\n", 1);
}
*/