/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:05:04 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:36:10 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest. Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, et les octets sont ensuite copiés de la zone temporaire vers dest.   

VALEUR RENVOYÉE 

La fonction memmove() renvoie un pointeur sur dest.   */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_dst[i] == (unsigned char)c)
			return (&dst[i + 1]);
		else
			i++;
	}
	return (0);
}
