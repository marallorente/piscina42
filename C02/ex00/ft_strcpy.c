/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:03:16 by marllore          #+#    #+#             */
/*   Updated: 2023/11/20 10:27:26 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
 */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hi";
	char dest [10];
	printf("cadena de origen: %s ", src);
	ft_strcpy(dest, src);
	printf("cadena de destino: %s", dest);
}
*/
