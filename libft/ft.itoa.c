/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:32:18 by doberste          #+#    #+#             */
/*   Updated: 2025/10/06 16:59:49 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		count_dig(int n);
char	*ft_itoa(int n);

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	int		temp;
	int		is_neg;

	is_neg = 0;
	result = malloc(count_dig(n) + 1);
	if (!result)
		return (NULL);
	i = count_dig(n);
	if (n < 0)
	{
		is_neg = 1;
		result[0] = '-';
		n = -n;
	}
	result[i] = '\0';
	i--;
	while (n > 10)
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
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

int	main(void)
{
	printf("%s", ft_itoa(-174714));
}

/*
todo: 

function itoa exceeds 25 lines
min_int needs to be handled hardcoded with my approach
*/