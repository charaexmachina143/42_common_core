/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:33:57 by doberste          #+#    #+#             */
/*   Updated: 2025/10/13 15:28:07 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			**ft_split(char const *s, char c);
static size_t	count_words(const char *str, char c);
static char		*alloc_words(char const *str, char c, int j);
static void		free_all(char **result, int i);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		res_i;

	i = 0;
	res_i = 0;
	result = (char **)malloc((count_words(s, c)) * sizeof(char *));
	if (!result || !*result)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[res_i] = alloc_words(s, c, i);
			if (!result[res_i])
				return (free_all(result, res_i - 1), NULL);
			res_i++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	result[res_i] = NULL;
	return (result);
}

static size_t	count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
			{
				i++;
			}
		}
	}
	return (count + 1);
}

static char	*alloc_words(char const *str, char c, int j)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	len = 0;
	while (str[j + len] && str[j + len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[j + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_all(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

// int	main(void)
// {
// 	printf("%s", ft_split(NULL, 'x'));
// }
