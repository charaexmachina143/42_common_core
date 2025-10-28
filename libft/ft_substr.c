/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 09:49:24 by doberste          #+#    #+#             */
/*   Updated: 2025/10/28 13:24:17 by doberste         ###   ########.fr       */
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
	if (s[0] == '\0' || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (s[i] && (size_t)i < len)
	{
		substr[sub_i] = s[i];
		i++;
		sub_i++;
	}
	substr[len] = '\0';
	return (substr);
}
// #include "stdio.h"
// int main()
// {
// 	char *result = ft_substr("hello world", 2, 3);
// 	free (result);
// }