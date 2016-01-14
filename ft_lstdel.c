/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:33:20 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 13:34:15 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *lst_next;

	list = *alst;
	while (list)
	{
		lst_next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = lst_next;
	}
	*alst = NULL;
}
