/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:06:22 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/21 15:13:34 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0') || !(str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	(void) argc;
	ft_str_is_numeric(argv[1]);

	int	print;
	print = ft_str_is_numeric(argv[1]);
	ft_putchar (print + '0');
	return (0);
}*/
