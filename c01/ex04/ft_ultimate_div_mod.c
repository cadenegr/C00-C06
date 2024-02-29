/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:25:29 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/16 21:41:43 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;

	temp = *a / *b;
	temp2 = *a % *b;
	*a = temp;
	*b = temp2;
}
/*
int	main()
{
	int	a = 12;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);

	char a2 = a + '0';
	char b2 = b + '0';
	write (1, "Division result: ", 16);
	write (1, &a2, 1);
	write (1, "\n", 1);
	write (1, "Remainder result: ", 17);
	write (1, &b2, 1);
	return(0);
}*/
