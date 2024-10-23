/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:45:51 by nchencha          #+#    #+#             */
/*   Updated: 2024/09/26 18:22:28 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	unsigned int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (format == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		count += ft_print_int(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'u')
		count += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == '%')
		count += ft_print_percent();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			count += ft_formats(args, str[++i]);
		else
			count += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
