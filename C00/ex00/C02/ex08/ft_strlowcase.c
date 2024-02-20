/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:23:59 by marllore          #+#    #+#             */
/*   Updated: 2023/11/21 15:30:16 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
 */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "HOLA";
	printf("%s\n", ft_strlowcase(str1));
}
*/
