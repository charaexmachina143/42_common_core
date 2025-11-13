/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:41:10 by doberste          #+#    #+#             */
/*   Updated: 2025/11/13 12:25:28 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_unsigned_fd(long nb, int fd);
int	ft_puthex_fd(long nb, int fd);
int	ft_puthex_upper_fd(long nb, int fd);
int	ft_putptr_fd(unsigned long int nb, int fd);
#endif
