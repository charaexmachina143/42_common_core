/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:19:17 by doberste          #+#    #+#             */
/*   Updated: 2025/10/06 13:04:23 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elem, size_t size_elem)
{
	void	*array;

	if (num_elem == 0 || size_elem == 0)
	{
		array = malloc(0);
		return (array);
	}
	if (num_elem * size_elem > 2147483647)
		return (NULL);
	array = malloc(num_elem * size_elem);
	if (!array)
		return (NULL);
	ft_bzero(array, num_elem);
	return (array);
}
