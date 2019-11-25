/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:14:42 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:40:59 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*toupper() convertit la lettre c en majuscule si c'est possible. La valeur renvoyée est celle de la lettre convertie, ou bien c si la conversion n'était pas possible.   */

int	ft_toupper(int c)
{
	while (c > 96 && c < 123)
		c -= 32;
	return (c);
}
