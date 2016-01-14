/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:55:51 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 14:07:45 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreverse(t_list **lst)
{
	t_list	*end_list;
	t_list	*last_end_list;
	t_list	*last_begin_list;
	int		index;

	end_list = ft_lstlast(*lst);
	index = ft_lstsize(*lst);
	while (--index > 0)
	{
		last_begin_list = ft_lstat(*lst, index);
		last_end_list = ft_lstlast(end_list);
		last_end_list->next = last_begin_list;
		last_begin_list->next = NULL;
	}
	*lst = end_list;
}
