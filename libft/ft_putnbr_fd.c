/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:38:01 by doberste          #+#    #+#             */
/*   Updated: 2025/10/13 16:11:59 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nb, int fd);
static void	ft_revstr(char *str, int size);

void	ft_putnbr_fd(int nb, int fd)
{
	char			buff[12];
	int				i;
	unsigned int	n;

	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		n = (unsigned int)(-((long)nb));
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
	write(fd, buff, i);
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
