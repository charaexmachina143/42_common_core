/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:41:10 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 12:44:09 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H

# define PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int 	ft_putnbr_unsigned_fd(long nb, int fd);
int		ft_puthex_fd(long nb, int fd);
int		ft_puthex_upper_fd(long nb, int fd);

#endif
