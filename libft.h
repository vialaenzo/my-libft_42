/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:22:36 by eviala            #+#    #+#             */
/*   Updated: 2024/05/05 15:34:52 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h> 

int		ft_strlen(const char *str);
int		ft_isascii(int i);
int		ft_isalnum(int i);
int		ft_isdigit(int i);
int		ft_isalpha(int i);
int		ft_isprint(int i);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		strcmp(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, char *src, size_t size);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_strdel(char **as);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, size_t n);
char	*strcpy(char *dest, const char *src);
char	*strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(char *src);
#endif
