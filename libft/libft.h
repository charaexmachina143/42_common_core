/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:23:55 by doberste          #+#    #+#             */
/*   Updated: 2025/10/02 10:14:21 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, char *src, unsigned int n);
size_t	ft_strlcat(char *dest, char *src, unsigned int n);

#endif