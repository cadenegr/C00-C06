/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:59:25 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/21 16:16:37 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
//	if(argc < 2)
	{
		ft_putchar('1');
		return (1);
	}
//
	int	print = ft_str_is_printable(argv[1]);
	ft_putchar(print + '0');
	return (0);
}*/
/*
int	main()
{
	char str[] = "5";

	int	print = ft_str_is_printable(str);
	ft_str_is_printable(str);
	ft_putchar(print + '0');
	return(0);
}*/
