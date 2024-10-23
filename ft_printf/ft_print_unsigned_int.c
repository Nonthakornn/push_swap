/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:33:16 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/26 13:39:13 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_print_unsigned_int(n / 10);
		count += ft_print_unsigned_int(n % 10);
	}
	else
		count += ft_print_char(n + '0');
	return (count);
}

/*
#include "ft_print_char.c"
int main()
{
	ft_print_unsigned_int(20);
}
*/