/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:26:01 by doberste          #+#    #+#             */
/*   Updated: 2025/10/08 10:40:52 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;

	i = 0;
	s = malloc(ft_strlen(s) * sizeof(char));
	if (!s)
		return (NULL);
	while (s[i])
	{
		s[i] = f(i, s[i]);
        i++; 
	}
	return (s);
}
