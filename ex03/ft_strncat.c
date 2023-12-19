/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:20:22 by alejango          #+#    #+#             */
/*   Updated: 2023/08/15 17:25:40 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*address;

	address = dest;
	while (*address)
	{
		address += 1;
	}
	while (*src && nb > 0)
	{
		*address = *src;
		address += 1;
		src += 1;
		nb -= 1;
	}
	*address = '\0';
	return (dest);
}
