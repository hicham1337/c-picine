/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 10:53:10 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/16 12:49:55 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	char	*prt;

	prt = str;
	while (*prt > 0)
	{
		write(1, prt, 1);
		prt++;
	}
}
