/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:36:47 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:43:26 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*La fonction strncmp() est identique sauf qu'elle ne compare que les n (au plus) premiers caractères de s1 et s2.  
!!!!!!!!!!! 2 facons : soit on compte comme ci dessous 
Soit on limite les reponses a –1, 0, ou 1 selon si superieur, inferieur, ou egal */


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)s2;
	s = (unsigned char *)s1;
	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s && d) && s[i] == d[i])
	{
		i++;
		if (s[i] == '\0' || d[i] == '\0')
			break ;
	}
	return ((unsigned char)s[i] - (unsigned char)d[i]);
}
