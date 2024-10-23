/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:27:37 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/27 22:09:26 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long long n, const char c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_hex((n / 16), c);
		count += ft_hex((n % 16), c);
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

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_hex(ptr, 'x');
	return (count);
}

/*
#include <stdio.h>
#include "ft_print_hex.c"
#include "ft_print_char.c"
int main(void)
{
	int num = 42;
	int *ptr = &num;
	int *null_ptr = NULL;

	ft_print_ptr((unsigned long long)ptr);
	printf("\n");

	ft_print_ptr((unsigned long long)null_ptr);
	return (0);
}
*/