/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 10:22:28 by doberste          #+#    #+#             */
/*   Updated: 2025/10/04 18:59:39 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		s1i;
	int		s2i;
	int		i;

	s1i = 0;
	s2i = 0;
	i = 0;
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[s1i])
	{
		new_str[i] = s1[s1i];
		s1i++;
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
