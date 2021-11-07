/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:18:15 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/21 10:10:03 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int long	i;
	int long	n;
	int long	result;

	i = 1;
	result = 0;
	if (nb > 0)
	{
		while (result < nb)
		{
			result = result + i;
			i = i + 2;
		}
		n = (i - 1) / 2;
		if (n * n == nb)
			return (n);
	}
	return (0);
}
