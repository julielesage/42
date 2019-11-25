/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:25:53 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:47:49 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Function name ft_substr  
Prototype char *ft_substr(char const *s, unsigned int start, size_t len);  
Fichiers de rendu -  
Paramètres #1. La chaine de laquelle extraire la nouvelle chaine #2. L’index de début de la nouvelle chaine #3. La taille maximale de la nouvelle chaine.  
Valeur de retour The nouvelle chaine de caractere. NULL si l’allocation échoue.  
Fonctions externes autorisées malloc  
Description Alloue (avec malloc(3)) et retourne une chaine de caractères issue de la chaine donnée en argument Cette nouvelle chaine commence à l’index ’start’ et a pour taille maximale ’len’ */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = NULL;
	if (!s)
		return (NULL);
	if ((start > ft_strlen(s)) || len == 0)
		return (ft_strdup("\0"));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
