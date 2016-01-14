/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:34:55 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 13:35:22 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *after;
	t_list *before;

	new_lst = NULL;
	if (lst && (*f))
	{
		new_lst = (*f)(lst);
		before = new_lst;
		lst = lst->next;
		while (lst)
		{
			after = (*f)(lst);
			before->next = after;
			before = after;
			lst = lst->next;
		}
		before->next = NULL;
	}
	return (new_lst);
}
