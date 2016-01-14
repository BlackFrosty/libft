/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:35:29 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 12:59:53 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s_i;
	size_t	f_i;

	if (*s2 == '\0')
		return ((char *)s1);
	s_i = 0;
	while (s1[s_i] != '\0' && s_i < n)
	{
		if (s1[s_i] == s2[0])
		{
			f_i = 0;
			while (s1[s_i + f_i] == s2[f_i] && s1[s_i + f_i] &&
					s2[f_i] && (s_i + f_i) < n)
				f_i++;
			if (s2[f_i] == '\0')
				return ((char *)&s1[s_i]);
		}
		s_i++;
	}
	return (NULL);
}
