/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:45:19 by alejango          #+#    #+#             */
/*   Updated: 2023/08/15 17:16:23 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	char	*address;

	address = dest;
	while (*address)
	{
		address += 1;
	}
	while (*src)
	{
		*address = *src;
		address += 1;
		src += 1;
	}
	*address = '\0';
	return (dest);
}
