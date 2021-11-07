/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:54:47 by hbel-hou          #+#    #+#             */
/*   Updated: 2021/08/12 11:26:44 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*count length of src:*/
int	ft_strlen(char *str)
{
	char	*a;
	char	b;

	a = str;
	b = 0;
	while (*a != 0)
	{
		a++;
		b++;
	}
	return (b);
}

/*there is your fonction*/
/*and it should copy from src to destination according to (size - one)*/
/*here it should return length of src*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	length;

	a = 0;
	length = ft_strlen(src);
	if (size != 0)
	{
		while (a < (size - 1) && a < length)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (length);
}
