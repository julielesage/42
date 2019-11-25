/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:19:01 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:42:12 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*La fonction strchr() renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s. Les fonctions strchr() et strrchr() renvoient un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé. */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*d;

	i = 0;
	d = (char *)str;
	while (d[i] != '\0')
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i++;
	}
	if (c == '\0')
		return (&d[i]);
	return (NULL);
}
