/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:07:22 by marllore          #+#    #+#             */
/*   Updated: 2023/11/14 16:24:49 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  #include <stdio.h>
 */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* 
 int	main(void)
{
	int	num1;
	int	num2;
	int	div1;
	int	mod1;

	num1 = 88;
	num2 = 68;
	ft_div_mod(num1, num2, &div1, &mod1);
	printf("Resultado de la división: %d\n", div1);
	printf("Resto de la división: %d\n", mod1);
	return (0);
}
*/
