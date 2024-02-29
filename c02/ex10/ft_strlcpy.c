/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:42:06 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/23 18:55:50 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1 && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

int main()
{
	char dest[] = "destination!";
	char src[] = "source!";
	unsigned int n = 5;

	ft_strlcpy(dest, src, n);


	char print = ft_strlcpy(dest, src, n) + '0';
	ft_putchar(print);
	write (1, "\n", 1);
	int j;

	j = 0;
	while (dest[j])
	{
		ft_putchar(dest[j]);
		j++;
	}
	return(0);
}
