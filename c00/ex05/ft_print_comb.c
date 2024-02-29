/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:31:46 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/15 13:40:48 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char x, char y, char z)
{
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
	if (x != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb();
	return(0);
}*/
