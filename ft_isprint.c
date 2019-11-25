/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:32:03 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:40:27 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*vérifie s'il s'agit d'un caractère imprimable, y compris l'espace. Les valeurs renvoyées sont non nulles si le caractère c entre dans la catégorie testée, et zéro sinon. */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
