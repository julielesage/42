/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:01:37 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:50:15 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Function name ft_strmapi  
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned int, char));  
Paramètres #1. La chaine de caractères sur laquelle itérer #2. La fonction à appliquer à chaque caractère.  

Valeur de retour La chaine de caractères résultant des applications successives de f. Retourne NULL si l’allocation échoue.  

Fonctions externes autorisées malloc Description Applique la fonction f à chaque caractère de la chaine de caractères passée en argument pour créer une nouvelle chaine de caractères (avec malloc(3)) résultant des applications successives de f. 
 */

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (!(str = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
