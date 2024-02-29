/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:49:21 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/21 15:55:32 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A') || !(str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_putchar('1');
		return (1);
	}
	
	int	print = ft_str_is_uppercase(argv[1]);
	ft_putchar (print + '0');
	return (0);
}*/
