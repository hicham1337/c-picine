/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:56:12 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/18 10:07:05 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		j = 0;
		if (to_find[0] == str[i])
		{
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0' )
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
