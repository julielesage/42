/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:10:05 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:41:37 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*tolower() convertit la lettre c en minuscule si c'est possible. La valeur renvoyée est celle de la lettre convertie, ou bien c si la conversion n'était pas possible.   */

int	ft_tolower(int c)
{
	while (c > 64 && c < 91)
		c += 32;
	return (c);
}
