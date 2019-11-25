/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 19:22:50 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:57:11 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Paramètres #1 L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Valeur de retour None
Fonctions externes autorisées
None
Description Itère sur la list lst et applique la fonction f au
contenu chaque élément.*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
