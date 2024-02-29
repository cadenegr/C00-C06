/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:18:31 by cadenegr          #+#    #+#             */
/*   Updated: 2023/03/29 17:55:12 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[i] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char s1[] = "I want you to find this word lala!";
	char find[] = "word";
	char s11[] = "I want you to find this word lala!";
    	char find1[] = "word";


	printf ("%s", ft_strstr(s1, find));
	printf ("\n%s", strstr(s11, find1));
}*/
