/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:50:26 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:39:58 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

/*vérifie si l'on a un chiffre (0 à 9) ou une lettre. Les valeurs renvoyées sont non nulles si le caractère c entre dans la catégorie testée, et zéro sinon.  */

int	ft_isalnum(int c)
{
	if (c < 48 || (c > 57 && c < 65)
	|| (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}
