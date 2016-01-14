/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 21:08:26 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/31 22:46:19 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblk(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int		st;
	int		end;

	if (!s)
		return (NULL);
	st = 0;
	end = ft_strlen(s) - 1;
	while (ft_isblk(s[st]))
		st++;
	if (!*s || end == st - 1)
		return (ft_strnew(0));
	while (ft_isblk(s[end]))
		end--;
	return (ft_strsub(s, st, (end -st + 1)));
}
