/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:22:36 by eviala            #+#    #+#             */
/*   Updated: 2024/04/29 19:44:28 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h> 

void	ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_isascii(int i);
int		ft_isalnum(int i);
int		ft_isdigit(int i);
int		ft_isalpha(int i);
int		ft_isprint(int i);

#endif
