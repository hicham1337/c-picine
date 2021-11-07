/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:55:54 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/07 17:41:21 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	prt_numbers(int a, int b)
{
	ft_putchar(a / 10 + '0' );
	ft_putchar(a % 10 + '0' );
	ft_putchar(' ');
	ft_putchar(b / 10 + '0' );
	ft_putchar(b % 10 + '0' );
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			prt_numbers(a, b);
			b++;
		}
		a++;
	}
}
