/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:47:49 by doberste          #+#    #+#             */
/*   Updated: 2025/10/08 17:11:31 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	o;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	o = 0;
	if (n == 0 || dest_len >= n - 1)
	{
		if (dest_len >= n)
			return (n + src_len);
		return (src_len + dest_len);
	}
	while (dest[i] != '\0')
		i++;
	while (src[o] != '\0' && o < n - dest_len - 1)
	{
		dest[i + o] = src[o];
		++o;
	}
	dest[i + o] = '\0';
	return (src_len + dest_len);
}
