/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:53:09 by marllore          #+#    #+#             */
/*   Updated: 2023/11/20 11:26:51 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	printf("%d\n", ft_str_is_numeric(str4));
}
*/
