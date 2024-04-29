/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:19:36 by eviala            #+#    #+#             */
/*   Updated: 2024/04/29 19:26:20 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if (i >= 0 && i <= 9 || i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
		return (1);
	return (0);
}