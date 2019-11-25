/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:55:45 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:48:51 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Function name ft_strtrim  
Prototype char *ft_strtrim(char const *s1, char const *set);  
Paramètres #1. La chaine de caractères à trimmer. #2. Le set de reference de caractères à trimmer.  
Valeur de retour La chaine de caractères trimmée. NULL si l’allocation échoue. Fonctions externes autorisées malloc Description Alloue (avec malloc(3)) et retourne une copie de la chaine de caractères donnée en argument, sans les caractères spécifiés dans le set donné en argument au début et à la fin de la chaine de caractères. */

static int	is_charset(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, const char *set)
{
	size_t		size;
	char		*substr;
	size_t		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	size = ft_strlen(s1);
	while (is_charset(s1[i], set))
		i++;
	if (i == size)
		substr = ft_strdup("");
	else
	{
		while (is_charset(s1[size - 1], set))
			size--;
		substr = ft_substr(s1, i, (size - i));
	}
	return (substr);
}
