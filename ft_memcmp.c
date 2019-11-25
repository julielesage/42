/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:55:45 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:36:48 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2. Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, égale ou supérieur à s2. 

La fonction memcmp() renvoie un entier négatif, nul ou positif si les n premiers octets de s1 sont respectivement inférieurs, égaux ou supérieurs aux n premiers octets de s2.   */

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;
	size_t			i;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	while (i < n && dst[i] == src[i])
		i++;
	if (i < n && dst[i] != src[i])
		return (src[i] - dst[i]);
	return (0);
}
