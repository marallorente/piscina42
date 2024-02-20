/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marllore <marllore@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:39:51 by marllore          #+#    #+#             */
/*   Updated: 2023/11/29 14:07:28 by marllore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
 */

int	ft_atoi(char *str)
{
	int	value;
	int	sign;
	int	i;

	value = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * sign);
}
/*
int	main(void)
{
	char	*nb;

	nb = "   ---+--+11234506789ab567";
	printf("%d", ft_atoi(nb));
}
*/
