/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:47:24 by doberste          #+#    #+#             */
/*   Updated: 2025/11/14 16:31:51 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...);
static int	format_call(const char suffix, va_list args);
static int	process_format(const char *format, int *i, va_list args);

static int	process_format(const char *format, int *i, va_list args)
{
	int	temp;

	if (format[*i] == '%' && format[*i + 1] == '\0')
		return (-1);
	if (format[*i] != '%')
	{
		write(1, &format[*i], 1);
		return (1);
	}
	temp = format_call(format[*i + 1], args);
	*i += 1;
	return (temp);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		temp;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		temp = process_format(format, &i, args);
		if (temp == -1)
			return (va_end(args), -1);
		count = count + temp;
		i++;
	}
	va_end(args);
	return (count);
}

static int	format_call(const char suffix, va_list args)
{
	if (suffix == 's')
		return (ft_putstr_fd((va_arg(args, char *)), 1));
	if (suffix == 'c')
		return (ft_putchar_fd((va_arg(args, int)), 1));
	if (suffix == 'i' || suffix == 'd')
		return (ft_putnbr_fd((va_arg(args, int)), 1));
	if (suffix == '%')
		return (write(1, "%", 1));
	if (suffix == 'u')
		return (ft_putnbr_unsigned_fd((va_arg(args, unsigned int)), 1));
	if (suffix == 'x')
		return (ft_puthex_fd(va_arg(args, unsigned int), 1));
	if (suffix == 'X')
		return (ft_puthex_upper_fd(va_arg(args, unsigned int), 1));
	if (suffix == 'p')
		return (ft_putptr_fd(va_arg(args, unsigned long int), 1));
	write(1, "%", 1);
	write(1, &suffix, 1);
	return (2);
}

// #include <stdio.h>
// // #include "ft_printf.h"

// int main()
// {
//     char *str = malloc(5);

// 	int result = ft_printf("%");
// 	printf("%i\n", result);
// 	int result2 = printf("%");
// 	printf("%i\n", result2);
// }
