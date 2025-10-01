/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:40:42 by doberste          #+#    #+#             */
/*   Updated: 2025/09/30 12:50:01 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	mem;
	size_t			i;

	mem = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = mem;
		i++;
	}
	return (str);
}

// int main()
// {
//     char str[] = "chara";
//     *str = *(unsigned char *)ft_memset(&str, 90, 3);

//     printf("%s", str);
// }