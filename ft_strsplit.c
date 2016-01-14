/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:30:14 by clagreou          #+#    #+#             */
/*   Updated: 2016/01/01 16:28:07 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c) && (str[i + 1] == c || !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static int	word_length(const char *str, int st, char c)
{
	int	len;

	len = 0;
	while (str[st] != c && str[st])
	{
		st++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		word_count;
	int		word_index;
	int		s_index;
	char	**tab;

	if (!s)
		return (0);
	word_count = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	s_index = 0;
	word_index = -1;
	while (++word_index < word_count)
	{
		while (s[s_index] == c)
			s_index++;
		tab[word_index] = ft_strsub(s, s_index, word_length(s, s_index, c));
		while (s[s_index] && s[s_index] != c)
			s_index++;
	}
	tab[word_count] = 0;
	return (tab);
}
