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
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);


#endif
