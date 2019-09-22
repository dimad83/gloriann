/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:52:13 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/20 23:34:57 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcat(char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
