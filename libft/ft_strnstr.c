/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:11:42 by doberste          #+#    #+#             */
/*   Updated: 2025/10/09 12:21:11 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int	i;
	int	o;

	o = 0;
	i = 0;
	while (str[i] && i < n)
	{
		while (str[i] == to_find[o] && i < n)
		{
			i++;
			o++;
			if (to_find[o] == '\0')
				return (&str[i - o]);
		}
		if (o != 0)
			i--;
		i++;
		o = 0;
	}
	if (to_find[0] == '\0')
		return (str);
	if (n == 0)
		return (NULL);
	return (NULL);
}
