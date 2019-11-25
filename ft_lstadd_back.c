/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 14:26:42 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:56:00 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Paramètres #1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.
Valeur de retour None
Fonctions externes autorisées
None
Description Ajoute l’élément new à la fin de la liste.*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*search;

	if (new != NULL)
	{
		search = *alst;
		if (search == NULL)
			*alst = new;
		else
		{
			while (search->next != NULL)
				search = search->next;
			search->next = new;
		}
	}
}
