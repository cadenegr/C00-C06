/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:03:14 by cadenegr          #+#    #+#             */
/*   Updated: 2023/04/01 21:20:13 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
/*
int	main()
{
	ft_putnbr(147483648);
	return(0);
}*/
