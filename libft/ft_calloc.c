/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:19:17 by doberste          #+#    #+#             */
/*   Updated: 2025/10/24 14:18:50 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((nmemb * size) / nmemb != size)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
