/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:38:56 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/11 17:57:16 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= '0' && *i <= '9')
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
