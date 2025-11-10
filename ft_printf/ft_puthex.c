/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:10:37 by doberste          #+#    #+#             */
/*   Updated: 2025/11/10 15:16:17 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(long nb, int fd);
void	ft_revstr(char *str, int size);

void	ft_puthex_fd(long nb, int fd)
{
	char			buff[100];
	int				i;
	unsigned int	n;
	char			*str;

	str = "0123456789abcdef";
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
		buff[i] = str[n % 16];
		n = n / 16;
		i++;
	}
	ft_revstr(buff, i);
	write(fd, buff, i);
}

void	ft_revstr(char *str, int size)
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