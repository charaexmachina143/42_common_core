/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:58:30 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 13:13:24 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_unsigned_fd(long nb, int fd);
void	ft_revstr(char *str, int size);

int	ft_putnbr_unsigned_fd(long nb, int fd)
{
	char			buff[100];
	int				i;
	unsigned int	n;

	i = 0;
	n = (unsigned int)nb;
	if (n == 0)
		write(fd, "0", 1);
	while (n > 0)
	{
		buff[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	ft_revstr(buff, i);
	return (write(fd, buff, i));
}

void	ft_revstr(char *str, int size)
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
