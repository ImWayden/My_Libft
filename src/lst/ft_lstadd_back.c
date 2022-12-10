/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: therodri <therodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:50:50 by therodri          #+#    #+#             */
/*   Updated: 2022/12/10 22:42:15 by therodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ajoute l’élément ’new’ à la fin de la liste.
*/
#include "../../header/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (*lst && lst && new)
		ft_lstlast(*lst)->next = new;
}
