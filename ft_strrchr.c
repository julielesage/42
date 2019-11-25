/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:17:39 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:42:39 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*La fonction strrchr() renvoie un pointeur sur la dernière occurrence du caractère c dans la chaîne s. Les fonctions strchr() et strrchr() renvoient un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé. */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*d;
	int		swap;

	i = ft_strlen(str);
	swap = i;
	d = (char *)str;
	while (i > -1)
	{
		if (str[i] == c)
			return (&d[i]);
		i--;
	}
	if (c == '\0')
		return (&d[swap]);
	return (NULL);
}
