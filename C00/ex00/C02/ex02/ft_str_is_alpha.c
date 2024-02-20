/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:00:31 by marllore          #+#    #+#             */
/*   Updated: 2023/11/20 10:53:39 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "Hola";
	char str2[] = "1388";
	char str3[] = "¡hola!";
	char str4[] = "";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));	
}
*/
