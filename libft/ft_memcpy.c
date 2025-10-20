/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:59:05 by doberste          #+#    #+#             */
/*   Updated: 2025/10/20 14:44:59 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s1 + i) = *(unsigned char *)(s2 + i);
		i++;
	}
	return (s1);
}
// int	main(void)
// {
// 	printf("%s", memcpy(NULL, NULL, 0));
// 	printf("%s", ft_memcpy(NULL, NULL, 0));
// }