/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:29:33 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/14 11:52:34 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*d != '\0')
	{
		d++;
	}
	while (*s != '\0')
	{
		*d = *s;
		s++;
		d++;
	}
	*d = '\0';
	return (dest);
}
