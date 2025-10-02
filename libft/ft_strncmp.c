/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:44:58 by doberste          #+#    #+#             */
/*   Updated: 2025/10/02 11:41:56 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && i < n)
	{
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		c = s1[i] - s2[i];
		return (c);
	}
	return (c);
}
