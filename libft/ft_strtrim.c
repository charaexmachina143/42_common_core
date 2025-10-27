/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 10:46:45 by doberste          #+#    #+#             */
/*   Updated: 2025/10/27 12:04:07 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set);
static int	index_front(const char *s1, char const *set);
static int	index_end(const char *s1, const char *set);
static char	*ft_real_string(const char *new_str, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		index1;

	if (!s1 || !set)
		return (NULL);
	index1 = index_front(s1, set);
	if ((size_t)index1 == ft_strlen(s1))
		return (ft_strdup(""));
	if (set[0] == '\0')
		return (ft_strdup((char *)s1));
	new_str = ft_real_string(s1, set);
	return (new_str);
}

static int	index_front(const char *s1, char const *set)
{
	int	i;
	int	set_i;

	i = 0;
	set_i = 0;
	if (s1[i])
	{
		while (set[set_i])
		{
			if (s1[i] == set[set_i])
			{
				set_i = -1;
				i++;
			}
			set_i++;
		}
	}
	return (i);
}

static int	index_end(const char *s1, const char *set)
{
	int	i;
	int	set_i;

	i = ft_strlen(s1);
	set_i = 0;
	if (i >= 0)
	{
		while (set[set_i])
		{
			if (s1[i] == set[set_i] || s1[i] == 0)
			{
				set_i = -1;
				i--;
			}
			set_i++;
		}
	}
	return (i);
}

static char	*ft_real_string(const char *s1, const char *set)
{
	char	*new_str;
	int		new_i;
	int		index1;
	int		index2;
	int		i;

	i = 0;
	new_i = 0;
	index1 = index_front(s1, set);
	index2 = index_end(s1, set);
	new_str = malloc(index2 - index1 + 2);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		if (i >= index1 && i <= index2)
		{
			new_str[new_i] = s1[i];
			new_i++;
		}
		i++;
	}
	new_str[new_i] = '\0';
	return (new_str);
}

// int	main(void)
// {
// 	printf("%s", ft_strtrim("hello world", "hde "));
// }
