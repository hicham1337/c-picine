/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:59:19 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/10 14:09:39 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 'A' && *i <= 'Z')
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
