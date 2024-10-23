/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:24:19 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/26 16:24:49 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//A->65
//a->97
int	ft_print_hex(unsigned int n, const char c)
{
	unsigned int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_hex((n / 16), c);
		count += ft_print_hex((n % 16), c);
	}
	else if (n > 9)
	{
		if (c == 'x')
			count += ft_print_char(n + 87);
		else if (c == 'X')
			count += ft_print_char(n + 55);
	}
	else
		count += ft_print_char(n + '0');
	return (count);
}

/*
#include <stdio.h>
#include "ft_print_char.c"
int main(void)
{
	//unsigned int num1 = 1016; //3F8
	unsigned int num1 = 17;

	ft_print_hex(num1, 'x');
	printf("\n");
	ft_print_hex(num1, 'X');

	return (0);
}
*/