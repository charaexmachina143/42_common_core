/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:38:01 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 14:05:50 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_putnbr_fd(int nb, int fd);
static void	ft_revstr(char *str, int size);

int	ft_putnbr_fd(int nb, int fd)
{
	char			buff[100];
	int				i;
	unsigned int	n;
	int				o;

	o = 0;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		n = (unsigned int)(-((long)nb));
		o = 1;
	}
	else
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
	return (write(fd, buff, i) + o);
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
