/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:34:49 by ttshung-          #+#    #+#             */
/*   Updated: 2022/06/10 15:34:49 by ttshung-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *string);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int 	ft_isalpha(int c);
int 	ft_isdigit(int c);
int		ft_isalnum(int c);
int 	ft_toupper(int c);
int 	ft_isascii(int c);
int 	ft_tolower(int c);
int 	ft_isprint(int c);
void	*ft_memchr(const void *b, int c, size_t size);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strrchr(const char *string, int c);
int		ft_strlen(char const *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *dest, int c, size_t count);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s, char const *set);

#endif
