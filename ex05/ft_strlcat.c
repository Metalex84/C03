/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:59:15 by alejango          #+#    #+#             */
/*   Updated: 2023/08/15 22:21:21 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	unsigned int	j;

	len_d = 0;
	len_s = 0;
	while (dest[len_d] != '\0' && len_d < size)
		len_d += 1;
	while (src[len_s] != '\0')
		len_s += 1;
	i = len_d;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (len_s + len_d);
}
