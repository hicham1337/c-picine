/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:15:45 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/16 10:16:37 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		n;
	int		i;
	char	*s;

	n = 0;
	i = 1;
	s = str;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			i = i * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10;
		n = n + (*s - '0');
		s++;
	}
	return (n * i);
}
