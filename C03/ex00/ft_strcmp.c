/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:12:50 by marllore          #+#    #+#             */
/*   Updated: 2023/11/22 14:13:55 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
 */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char chaine1[] = "Hola";
	char chaine2[] = "Holaa";

 	ft_strcmp (chaine1, chaine2);

	printf("%d",ft_strcmp(chaine1, chaine2));

	return (0); 
}
*/
