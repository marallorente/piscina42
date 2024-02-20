/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:15:44 by marllore          #+#    #+#             */
/*   Updated: 2023/11/20 11:33:44 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 #include <stdio.h>
 */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char str1[] = "hola";
	char str2[] = "12388";
	char str3[] = "¡hola!";
	char str4[] = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
}
*/
