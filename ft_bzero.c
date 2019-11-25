/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:15:28 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:34:45 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*La fonction bzero() met à 0 (octets contenant « \0 ») 
 * les n premiers octets du bloc pointé par s. */

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n--)
	{
		str[i] = 0;
		i++;
	}
}
