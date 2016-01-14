/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:58:37 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/30 19:08:13 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s || !(*s) || !len)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len && s[start])
		str[i] = s[start + i];
	return (str);
}
