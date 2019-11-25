/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:11:23 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:54:24 by jlesage          ###   ########.fr       */
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
Description Ajoute l’élément ’new’ au début de la liste.*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst != NULL && new != NULL)
		new->next = *alst;
	*alst = new;
}
