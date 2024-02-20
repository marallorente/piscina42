/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:46:58 by marllore          #+#    #+#             */
/*   Updated: 2023/11/14 16:03:04 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 8;
	num2 = 10;
	printf("antes interc: num1 = %d, num2 = %d\n", num1, num2);
	ft_swap(&num2, &num1);
	printf("despues interc: num1 = %d, num2= %d\n", num1, num2);
	return (0);
}
*/
