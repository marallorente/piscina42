/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:07:39 by marllore          #+#    #+#             */
/*   Updated: 2023/11/17 12:31:35 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * #include <stdio.h> 
  */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello";
    char dest[10];

    
    printf("Cadena de origen antes de la copia: %s\n", src);

    
    ft_strncpy(dest, src, 1);


    printf("Cadena de destino después de la copia: %s\n", dest);

    return 0;
}
*/
