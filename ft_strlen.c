/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:38:22 by eviala            #+#    #+#             */
/*   Updated: 2024/04/23 20:38:22 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

size_t	ft_strlen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i])
	i++;
    return (i);
}

int     main(void)
{
    char        *str = "Hello World";
    printf("%zu\n", ft_strlen(str));
    return (0);
}