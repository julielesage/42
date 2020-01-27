/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 21:16:25 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/19 16:33:58 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

/*La fonction memmove() copie n octets depuis la zone mémoire src vers la zone mémoire dest. 
Les deux zones peuvent se chevaucher : la copie se passe comme si les octets de src étaient d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, 
et les octets sont ensuite copiés de la zone temporaire vers dest.  */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (s < d)
		while (n--)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
*/
