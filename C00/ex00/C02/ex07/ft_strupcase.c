/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:36:48 by marllore          #+#    #+#             */
/*   Updated: 2023/11/21 15:21:11 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
 */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "hola";	
	printf("%s\n", ft_strupcase(str1));	
}
*/
