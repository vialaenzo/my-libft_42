/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:07:26 by eviala            #+#    #+#             */
/*   Updated: 2024/05/05 15:31:23 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\n' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}
