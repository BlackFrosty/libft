/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 23:58:06 by clagreou          #+#    #+#             */
/*   Updated: 2015/11/25 00:11:29 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		index_s1;
	int		index_s2;
	char	*str2;

	index_s1 = 0;
	str2 = (char *)s2;
	while (s1[index_s1] != '\0')
		index_s1++;
	index_s2 = 0;
	while (str2[index_s2] != '\0' && (size_t)index_s2 < n)
	{
		s1[index_s1] = str2[index_s2];
		index_s1++;
		index_s2++;
	}
	s1[index_s1] = '\0';
	return (s1);
}
