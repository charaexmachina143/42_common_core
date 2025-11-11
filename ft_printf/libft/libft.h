/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:23:55 by doberste          #+#    #+#             */
/*   Updated: 2025/11/11 12:34:53 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

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
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_toupper(int str);
int		ft_tolower(int str);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strrchr(const char *str, int search_str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	*ft_memchr(const void *str, int search_str, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t n);
int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(char *src);
void	*ft_calloc(size_t num_elem, size_t size_elem);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int nb, int fd);
#endif
