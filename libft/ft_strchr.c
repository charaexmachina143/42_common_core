/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:29:07 by doberste          #+#    #+#             */
/*   Updated: 2025/10/08 13:14:21 by doberste         ###   ########.fr       */
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
		return ((char *)&str[i]);
	}
	else
		return (NULL);
}
