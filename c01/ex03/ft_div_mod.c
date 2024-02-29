/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:27:53 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/16 16:59:38 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a = 20;
	int b = 6;
	int x;
	int y;

	ft_div_mod(a, b, &x, &y);

	char x2 = x + '0';
	char y2 = y + '0';
	write (1, "This is the division of a and b ", 32);
	write (1, &x2, 1);
	write (1, "\n", 1);
	write (1, "This is the remainder ", 22);
	write (1, &y2, 1);
	return(0);
}*/
