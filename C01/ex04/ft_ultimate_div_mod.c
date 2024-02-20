/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:26:16 by marllore          #+#    #+#             */
/*   Updated: 2023/11/14 17:05:46 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
 */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
int main(void)
{

	int num1 = 10;
	int num2 = 2;
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	ft_ultimate_div_mod(ptr1, ptr2);
	printf("el número es: %d", num1);
	return (0);
}
*/
