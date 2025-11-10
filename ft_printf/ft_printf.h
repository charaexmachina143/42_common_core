/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:41:10 by doberste          #+#    #+#             */
/*   Updated: 2025/11/10 15:38:06 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRINTF_H

# define PRINTF_H
#include <stdarg.h>
#include "libft/libft.h"

int	ft_printf(const char *format, ...);
void	ft_putnbr_unsigned_fd(long nb, int fd);







#endif

