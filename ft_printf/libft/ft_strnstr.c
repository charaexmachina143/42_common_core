/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:11:42 by doberste          #+#    #+#             */
/*   Updated: 2025/10/10 16:42:33 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	o;

	o = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < n)
	{
		while (str[i + o] == to_find[o] && i + o < n)
		{
			o++;
			if (to_find[o] == '\0')
				return (&str[i]);
		}
		i++;
		o = 0;
	}
	return (NULL);
}
