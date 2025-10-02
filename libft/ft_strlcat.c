/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:47:49 by doberste          #+#    #+#             */
/*   Updated: 2025/10/02 10:14:34 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0' && o < n)
	{
		dest[i + o] = src[o];
		++o;
	}
	dest[i + o] = '\0';
	return (ft_strlen(dest));
