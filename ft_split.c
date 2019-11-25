/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:02:34 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:49:17 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Function name ft_split  
Prototype char **ft_split(char const *s, char c);  
Paramètres #1. La chaine de caractères à découper. #2. Le caractère délimitant.  
Valeur de retour Le tableau de nouvelles chaines de caractères, résultant du découpage. NULL si l’allocation échoue.  
Fonctions externes autorisées malloc, free  
Description Alloue (avec malloc(3)) et retourne un tableau de chaines de caracteres obtenu en séparant s à l’aide du caractère c, utilisé comme délimiteur. Le tableau doit être terminé par NULL. */

static char		*mallocword(char *s, char c, size_t i)
{
	size_t	x;
	char	*word;

	x = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		x++;
		i++;
	}
	if (!(word = (char *)malloc(sizeof(char) * (x + 1))))
		return (NULL);
	i = i - x;
	x = 0;
	while (s[i] && s[i] != c)
	{
		word[x] = s[i];
		x++;
		i++;
	}
	word[x] = '\0';
	return (word);
}

static size_t	ft_word_count(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static int		ft_sp(char **arr, char c, char const *s)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			arr[j] = mallocword((char *)s, c, i);
			if (arr[j] == NULL)
			{
				while (j > 0)
					free(arr[--j]);
				free(arr);
				return (FAILURE);
			}
			i += ft_strlen(arr[j++]);
		}
	}
	arr[j] = NULL;
	return (SUCCESS);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * ((ft_word_count((char *)s, c) + 1)));
	if (arr != NULL)
	{
		if (ft_sp(arr, c, s) == FAILURE)
			return (NULL);
	}
	return (arr);
}
