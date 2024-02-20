/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:37:35 by marllore          #+#    #+#             */
/*   Updated: 2023/11/20 11:44:41 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 #include <stdio.h>
 */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
	char str1[] = "HOLA";
	char str2[] = "12388";
	char str3[] = "¡hola!";
	char str4[] = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
}
*/
