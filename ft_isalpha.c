/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:48:27 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:37:42 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*vérifie si l'on a un caractère alphabétique. Dans la localisation "C" standard, c'est équivalent à (isupper(c) || islower(c)). Dans certaines localisations, il peut y avoir des caractères supplémentaires pour lesquels isalpha() est vrai, c'est-à-dire pour des lettres qui ne sont ni majuscules ni minuscules. 

Les valeurs renvoyées sont non nulles si le caractère c entre dans la catégorie testée, et zéro sinon */

int	ft_isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}
