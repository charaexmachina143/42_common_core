/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:47:24 by doberste          #+#    #+#             */
/*   Updated: 2025/10/13 11:46:42 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
			write(1, format[i], 1);
			i++;
		} 
		else
		{
			format_call(format[i + 1]);
			i = i + 2;
		}
	}
}

static void format_call(const char suffix)
{
	if(suffix == "s")
		print_string();
	if(suffix == "c")
}