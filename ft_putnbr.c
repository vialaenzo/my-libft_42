/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eviala <enzo.viala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:00:19 by eviala            #+#    #+#             */
/*   Updated: 2024/04/30 21:00:19 by eviala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return ;
        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + '0');
        }
}
