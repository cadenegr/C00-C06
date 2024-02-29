/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:19:54 by cadenegr          #+#    #+#             */
/*   Updated: 2023/04/01 19:26:55 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return(0);
	ft_strlen(argv[1]);
	char print = ft_strlen(argv[1]) + '0';
	write(1, &print, 1);
	printf ("\n%d",   ft_strlen(argv[1]));
	return(0);
}*/
