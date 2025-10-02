/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:40:50 by doberste          #+#    #+#             */
/*   Updated: 2025/10/02 11:26:09 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == (char)search_str)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}
