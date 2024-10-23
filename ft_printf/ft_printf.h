/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchencha <nchencha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 07:00:35 by nchencha          #+#    #+#             */
/*   Updated: 2024/10/06 19:52:31 by nchencha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_percent(void);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_hex(unsigned int n, const char c);
int	ft_print_ptr(unsigned long long ptr);
#endif
