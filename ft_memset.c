/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:20:43 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:33:57 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*Remplace la valeur dans une adresse memoire. 

Qd on dit set = valeur, ca veut dire que set a la meme adresse que pointer, 
ce n est pas une copie ailleurs.*/

void	*ft_memset(void *pointer, int value, size_t len)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)pointer;
	i = 0;
	while (len--)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
