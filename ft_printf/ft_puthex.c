/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:10:37 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 17:19:27 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_puthex_fd(long nb, int fd);
static void	ft_revstr(char *str, int size);

int	ft_puthex_fd(long nb, int fd)
{
	char			buff[100];
	int				i;
	unsigned int	n;
	char			*str;

	str = "0123456789abcdef";
	i = 0;
	n = (unsigned int)nb;
	if (n == 0)
		return (write(fd, "0", 1));
	while (n > 0)
	{
		buff[i] = str[n % 16];
		n = n / 16;
		i++;
	}
	ft_revstr(buff, i);
	return (write(fd, buff, i));
}

static void	ft_revstr(char *str, int size)
{
	int tmp;
	int i;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}