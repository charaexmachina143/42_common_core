/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:00:36 by doberste          #+#    #+#             */
/*   Updated: 2025/11/13 12:31:51 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_putptr_fd(unsigned long int nb, int fd);
static void	ft_revstr(char *str, int size);

int	ft_putptr_fd(unsigned long int nb, int fd)
{
	char				buff[100];
	int					i;
	unsigned long int	n;
	char				*str;

	str = "0123456789abcdef";
	i = 0;
	n = nb;
	if (n == 0)
		return (write(fd, "(nil)", 5));
	else
		write(fd, "0x", 2);
	while (n > 0)
	{
		buff[i] = str[n % 16];
		n = n / 16;
		i++;
	}
	ft_revstr(buff, i);
	return (write(fd, buff, i) + 2);
}

static void	ft_revstr(char *str, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}
