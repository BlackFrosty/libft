/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 14:00:24 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 14:02:04 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, unsigned int pos)
{
	while (lst && --pos > 0)
		lst = lst->next;
	if (pos > 0)
		return (NULL);
	else
		return (lst);
}
