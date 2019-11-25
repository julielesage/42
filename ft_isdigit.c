/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:05:13 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:39:15 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*vérifie si l'on a un chiffre (0 à 9). Les valeurs renvoyées sont non nulles si le caractère c entre dans la catégorie testée, et zéro sinon. */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
