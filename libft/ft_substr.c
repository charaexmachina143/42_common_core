/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 09:49:24 by doberste          #+#    #+#             */
/*   Updated: 2025/10/04 10:15:33 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		sub_i;

	i = start;
	sub_i = 0;
	substr = malloc(len);
	if (!substr)
	{
		return (NULL);
	}
	while (s[i])
	{
		substr[sub_i] = s[i];
		i++;
		sub_i++;
	}
	return (substr);
}
