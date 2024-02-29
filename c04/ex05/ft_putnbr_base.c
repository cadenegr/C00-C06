/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:05:23 by cadenegr          #+#    #+#             */
/*   Updated: 2023/04/02 16:05:29 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar();
		i++;
	}
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

void	not_same_char(int *tab, int size)
{
	int	i;

	i = 0;
	while (tab[0] != tab[i + 1])
	{
		if (tab[0] == tab[i + 1])
			return;
		i++;
	}
}

void	contains_positive_neg(char *str)
{
	while(str[i])
		if (str[i] == '-' || str[i] == '+')
			return;
		i++;
}


void	ft_putnbr_base(int nbr, char *base)
{
	if (base[0] == NULL || base[1] == '\0')
		return;
	
}

int	main()
{
	ft_putnbr_base();
	return(0);
}
