/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:47:24 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 17:17:17 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...);
static int	format_call(const char suffix, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		o;

	va_start(args, format);
	va_end(args);
	i = 0;
	o = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
		}
		else
		{
			o = format_call(format[i + 1], args);
			i = i + 2;
		}
	}
	return (o);
}

static int	format_call(const char suffix, va_list args)
{
	int	count;

	count = 0;
	if (suffix == 's')
		count = ft_putstr_fd((va_arg(args, char *)), 1);
	if (suffix == 'c')
		count = ft_putchar_fd((va_arg(args, int)), 1);
	if (suffix == 'i' || suffix == 'd')
		count = ft_putnbr_fd((va_arg(args, int)), 1);
	if (suffix == '%')
		count = write(1, "%", 1);
	if (suffix == 'u')
		count = ft_putnbr_unsigned_fd((va_arg(args, unsigned int)), 1);
	if (suffix == 'x')
		count = ft_puthex_fd(va_arg(args, unsigned int), 1);
	if (suffix == 'X')
		count = ft_puthex_upper_fd(va_arg(args, unsigned int), 1);
	if (suffix == 'p')
	{
		write(1, "0x", 2);
		count = ft_puthex_fd(va_arg(args, long), 1) + 2;
	}
	return (count);
}

// #include <stdio.h>
// // #include "ft_printf.h"

// int main()
// {
//     int result = ft_printf("%i", NULL);
// 	printf("%i", result);
// }
