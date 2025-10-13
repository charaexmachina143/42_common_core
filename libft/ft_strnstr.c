/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:11:42 by doberste          #+#    #+#             */
/*   Updated: 2025/10/13 16:38:58 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	o;

	o = 0;
	i = 0;
	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return (big);
	while (big[i] && i < len)
	{
		while (big[i + o] == little[o] && i + o < len)
		{
			o++;
			if (little[o] == '\0')
				return (&big[i]);
		}
		i++;
		o = 0;
	}
	return (NULL);
}
