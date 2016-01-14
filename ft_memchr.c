/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 23:19:17 by clagreou          #+#    #+#             */
/*   Updated: 2015/11/23 18:54:40 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;

	index = -1;
	str = (unsigned char *)s;
	while (++index < n)
		if (str[index] == (unsigned char)c)
			return (&(str[index]));
	return (NULL);
}
