/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:09:53 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:44:02 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

/*Cette fonction est similaire à strncpy(copie la chaîne pointée par src, dans la chaîne pointée par dest. Les deux chaînes ne doivent pas se chevaucher. La chaîne dest doit être assez grande pour accueillir la copie.), mais elle copie au plus size−1 octets vers dest, ajoute toujours un octet nul final et ne remplit la cible avec des (autres) octets nuls.  */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		if (src && i < dstsize)
			dst[i] = '\0';
		if (!src)
			dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
