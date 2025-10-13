/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:15:28 by doberste          #+#    #+#             */
/*   Updated: 2025/10/13 16:36:21 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
		{
			c = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
			return (c);
		}
		i++;
	}
	return (c);
}
