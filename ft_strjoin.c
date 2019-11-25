/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:15:12 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:48:16 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Function name ft_strjoin  
Prototype char *ft_strjoin(char const *s1, char const *s2);  
Fichiers de rendu -  
Paramètres #1. La chaine de caractères préfixe. #2. La chaine de caractères suffixe.  
Valeur de retour La nouvelle chaine de caractères. NULL si l’allocation échoue.  
Fonctions externes autorisées malloc  
Description Alloue (avec malloc(3)) et retourne une nouvelle chaine, résultat de la concaténation de s1 et s2. */

char		*ft_strjoin(char const *s1, const char *s2)
{
	char		*dst;
	size_t		i;
	size_t		j;
	size_t		globalsize;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	globalsize = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = (char *)malloc((globalsize + 1) * (sizeof(char)))))
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}
