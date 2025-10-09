/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 09:49:24 by doberste          #+#    #+#             */
/*   Updated: 2025/10/09 13:57:39 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	int				sub_i;

	i = start;
	sub_i = 0;
	substr = malloc(len * sizeof(char) + 1);
	if (len <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (!substr)
		return (NULL);
	while (s[i])
	{
		substr[sub_i] = s[i];
		i++;
		sub_i++;
	}
	substr[len] = '\0';
	return (substr);
}
