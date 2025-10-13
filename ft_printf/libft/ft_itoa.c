/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:32:18 by doberste          #+#    #+#             */
/*   Updated: 2025/10/10 20:40:24 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		count_dig(int n);
char	*ft_itoa(int n);
char	*min_int_handle(char *result);

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	result = "";
	if (n == -2147483648LL)
		return (min_int_handle(result));
	result = malloc(count_dig(n) + 1);
	if (!result)
		return (NULL);
	i = count_dig(n);
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[i] = '\0';
	i--;
	while (n > 9)
	{
		result[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	result[i] = n + 48;
	return (result);
}

int	count_dig(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*min_int_handle(char *result)
{
	result = malloc(12);
	if (!result)
		return (NULL);
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
	result[11] = '\0';
	return (result);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648LL));
// }
