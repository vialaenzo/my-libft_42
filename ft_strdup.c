/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:36:30 by eviala            #+#    #+#             */
/*   Updated: 2024/05/04 12:39:56 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = malloc(ft_strlen(src) * sizeof(char));
	if (!cpy)
		return (NULL);
	while (src[i] != '\n')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
