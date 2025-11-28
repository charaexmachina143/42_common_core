/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:54:43 by doberste          #+#    #+#             */
/*   Updated: 2025/11/28 15:35:16 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
		a = a + 1;
	return (a);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			sub_i;

	i = start;
	sub_i = 0;
	if (s[0] == '\0' || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (s[i] && sub_i < len)
	{
		substr[sub_i] = s[i];
		i++;
		sub_i++;
	}
	substr[len] = '\0';
	return (substr);
}
char	*ft_strdup(char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		s2i;
	int		i;

	s2i = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[s2i])
	{
		new_str[i] = s2[s2i];
		s2i++;
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i])
	{
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	else
		return (NULL);
}
