/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:42:01 by rcolorad          #+#    #+#             */
/*   Updated: 2023/11/12 16:06:43 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_char(int i, int j, int x, int y)
{
	if (j == 0 && (i == 0 || i == y - 1))
		ft_putchar('A');
	else if ((j == x - 1) && (i == 0 || i == y - 1))
		ft_putchar('C');
	else if ((i == 0 || i == y - 1) && (j != 0 && j != x - 1))
		ft_putchar('B');
	else if ((j == 0 || j == x - 1) && (i != 0 && i != y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

int	error_control(int x, int y)
{
	int	boolean;

	boolean = 1;
	if (x < 0)
	{
		write(1, "ERROR: Number of columns must be at least 1\n", 44);
		boolean = 0;
	}
	if (y < 0)
	{
		write(1, "ERROR: Number of rows must be at least 1\n", 41);
		boolean = 0;
	}
	return (boolean);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (error_control(x, y) == 1)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				write_char(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
