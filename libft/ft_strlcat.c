/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:47:49 by doberste          #+#    #+#             */
/*   Updated: 2025/10/14 11:07:13 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	o;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	o = 0;
	if (n == 0 || dest_len >= n - 1)
	{
		if (dest_len >= n)
			return (n + src_len);
		return (src_len + dest_len);
	}
	while (dst[i] != '\0')
		i++;
	while (src[o] != '\0' && o < n - dest_len - 1)
	{
		dst[i + o] = src[o];
		++o;
	}
	dst[i + o] = '\0';
	return (src_len + dest_len);
}
// int main()
// {
// 	printf("%zu", ft_strlcat(NULL, NULL, 1));
// }