/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:28:32 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/09 14:15:20 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	_switch;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (*(tab + b) < *(tab + a))
			{
				_switch = *(tab + a);
				*(tab + a) = *(tab + b);
				*(tab + b) = _switch ;
			}
			b++;
		}
		a++;
	}
}
