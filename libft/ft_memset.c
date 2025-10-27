/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:40:42 by doberste          #+#    #+#             */
/*   Updated: 2025/10/27 12:01:27 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	mem;
	size_t			i;

	mem = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = mem;
		i++;
	}
	return (s);
}

// int main()
// {
//     char s[] = "chara";
//     *s = *(unsigned char *)ft_memset(&s, 90, 3);

//     printf("%s", s);
// }