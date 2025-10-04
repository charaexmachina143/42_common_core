/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:33:57 by doberste          #+#    #+#             */
/*   Updated: 2025/10/04 18:59:26 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char *s, char c)
{
}
static int	count_words(const char *str, char delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == delim)
		{
			i++;
		}
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != delim)
			{
				i++;
			}
		}
	}
	return (count);
}
static char	*alloc_words(char *s, char c)