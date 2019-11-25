/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 23:14:59 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:49:47 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Function name ft_itoa  
Prototype char *ft_itoa(int n);  
Paramètres #1. l’integer à convertir.  
Valeur de retour La chaine de caractères représentant l’integer. NULL si l’allocation échoue. Fonctions externes autorisées malloc Description Alloue (avec malloc(3)) et retourne une chaine de caractères représentant l’integer reçu en argument. Les nombres négatifs doivent être gérés. */

static	int		ft_nb(unsigned int n)
{
	int		count;

	count = 0;
	if (n >= 10)
	{
		n = n / 10;
		count = ft_nb(n);
	}
	count++;
	return (count);
}

char			*ft_itoa(int n)
{
	int				a;
	int				negative;
	char			*number;
	long			nb;

	a = 0;
	negative = (n < 0) ? 1 : 0;
	nb = n;
	nb = (negative == 1) ? -nb : nb;
	if (!(number = malloc(sizeof(char) * (ft_nb(nb)) + negative + 1)))
		return (NULL);
	if (negative == 1)
		number[0] = '-';
	a = (ft_nb(nb)) + negative;
	number[a] = '\0';
	if (nb == 0)
		number[0] = '0';
	while (nb > 0)
	{
		number[--a] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (number);
}
