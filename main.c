/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:25:47 by eviala            #+#    #+#             */
/*   Updated: 2024/05/01 10:58:15 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Test ft_strlen = 4\n");
	printf("%d\n", ft_strlen("Test"));
	printf("Test ft_putchar('t')\n");
	ft_putchar('t');
	printf("\nTest ft_putnbr(42)\n");
	ft_putnbr(42);
	printf("\nTest ft_isdigit(6)\n");
	printf("%d", ft_isdigit(6));
	printf("\nTest ft_isdigit(a)\n");
	printf("%d", ft_isdigit('a'));
	return (0);
}
