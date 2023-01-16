/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:32:04 by gfurtado          #+#    #+#             */
/*   Updated: 2022/12/14 23:46:34 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;
	t_list	*prox;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		prox = temp->next;
		del(temp->content);
		free(temp);
		temp = prox;
	}
	*lst = NULL;
}
