/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:41:41 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:45:02 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*la fonction strstr() cherche la première occurrence de la sous-chaîne aiguille au sein de la chaîne meule_de_foin. Les caractères « \0 » de fin ne sont pas comparés. Donc la strnstr devrait chercher l aiguille dans une taile donnee. */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (j < len && haystack[i + j] == needle[0])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (0);
}
