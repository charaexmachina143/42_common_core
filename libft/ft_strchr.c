/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:29:07 by doberste          #+#    #+#             */
/*   Updated: 2025/10/02 12:01:29 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i] != (char)search_str && str[i])
	{
		i++;
	}
	if (str[i] == (char)search_str)
	{
		return (&str[i]);
	}
	else
		return (NULL);
}
