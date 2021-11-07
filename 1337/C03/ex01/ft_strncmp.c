/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:46:40 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/15 12:22:10 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	s1i;
	unsigned char	s2i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		s1i = s1[i];
		s2i = s2[i];
		if (s1i != s2i)
			return (s1i - s2i);
		i++;
	}
	return (0);
}
