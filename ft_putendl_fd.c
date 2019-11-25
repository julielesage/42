/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlesage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:20:11 by jlesage           #+#    #+#             */
/*   Updated: 2019/11/25 19:51:08 by jlesage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*Function name ft_putendl_fd  
Prototype void ft_putendl_fd(char *s, int fd);  
Paramètres #1. La chaine de caractères à écrire #2. Le file descriptor sur lequel écrire.  
Valeur de retour None Fonctions externes autorisées write Description Écrit La chaine de caractères s sur le file descriptor donné, suivie d’un retour à la ligne. */

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
