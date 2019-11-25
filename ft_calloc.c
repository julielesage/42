/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:06:58 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:46:19 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

/*calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de taille size octets, et renvoie un pointeur vers la mémoire allouée. Cette zone est remplie avec des zéros. Si nmemb ou size vaut 0, calloc() renvoie soit NULL, soit un pointeur unique qui pourra être passé ultérieurement à free() avec succès. 

calloc() et malloc() renvoient un pointeur sur la mémoire allouée, qui est correctement alignée pour n'importe quel type de variable. Si elles échouent, elles renvoient NULL. NULL peut également être renvoyé par un appel réussi à malloc() avec un argument size égal à zéro, ou par un appel réussi de realloc() avec nmemb ou size égal à zéro. */

void	*ft_calloc(size_t n, size_t typesize)
{
	void	*dest;
	size_t	i;

	i = 0;
	if (!(dest = malloc((n * typesize))))
		return (NULL);
	while (i < n * typesize)
	{
		((char *)dest)[i] = 0;
		i++;
	}
	return (dest);
}
