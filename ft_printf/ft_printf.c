/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:47:24 by doberste          #+#    #+#             */
/*   Updated: 2025/11/10 15:37:44 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_printf(const char *format, ...);
static void format_call(const char suffix, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	va_end(args);

	int i = 0;

	while (format[i])
	{
		if(format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
		} 
		else
		{
			format_call(format[i + 1], args);
			i = i + 2;
		}
	}
}

static void format_call(const char suffix, va_list args)
{
	if(suffix == 's')
		ft_putstr_fd((va_arg(args, char *)), 1);
	if(suffix == 'c')
		ft_putchar_fd((va_arg(args, int)), 1);
	if(suffix == 'i' || suffix == 'd')
		ft_putnbr_fd((va_arg(args, int)), 1);
	if(suffix == '%')	
		write(1, "%", 1);
	if(suffix == 'u')
		ft_putnbr_unsigned_fd((va_arg(args, unsigned int)), 1);
}
