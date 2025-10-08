/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:17:58 by doberste          #+#    #+#             */
/*   Updated: 2025/10/08 13:11:29 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char *str);
static void	ft_preatoi(char *str, int *i, int *is_neg);

int	ft_atoi(char *str)
{
	int	i;
	int	total;
	int	is_neg;

	i = 0;
	is_neg = 0;
	total = 0;
	while (str[i])
	{
		ft_preatoi(str, &i, &is_neg);
		if (is_neg == 2)
			return (0);
		while (str[i] >= '0' && str[i] <= '9')
		{
			total = total * 10;
			total = total + (str[i] - 48);
		}
	}
	if (is_neg == 1)
		total = -total;
	return (total);
}

static void	ft_preatoi(char *str, int *i, int *is_neg)
{
	while (str[*i] == ' ' && str[*i] == '\n' && str[*i] == '\t'
		&& str[*i] == '\r' && str[*i] == '\v' && str[*i] == '\f')
		i++;
	if (str[*i] == '+')
	{
		if (str[*i + 1] == '+' || str[*i] == '-')
		{
			*is_neg = 2;
			return ;
		}
		i++;
	}
	if (str[*i] == '-')
	{
		if (str[*i + 1] == '+' || str[*i] == '-')
		{
			*is_neg = 2;
			return ;
		}
		*is_neg = 1;
		i++;
	}
}
