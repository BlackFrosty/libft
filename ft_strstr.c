/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 00:01:59 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 12:59:27 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		s_i;
	int		f_i;

	if (*s2 == '\0')
		return ((char *)s1);
	s_i = 0;
	while (s1[s_i] != '\0')
	{
		if (s1[s_i] == s2[0])
		{
			f_i = 0;
			while (s1[s_i + f_i] == s2[f_i] && s1[s_i + f_i] && s2[f_i])
				f_i++;
			if (s2[f_i] == '\0')
				return ((char *)&s1[s_i]);
		}
		s_i++;
	}
	return (NULL);
}
