/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 23:42:06 by clagreou          #+#    #+#             */
/*   Updated: 2015/11/25 00:01:34 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		index_s1;
	int		index_s2;
	char	*str2;

	index_s1 = 0;
	str2 = (char *)s2;
	while (s1[index_s1] != '\0')
		index_s1++;
	index_s2 = 0;
	while (str2[index_s2] != '\0')
	{
		s1[index_s1] = str2[index_s2];
		index_s1++;
		index_s2++;
	}
	s1[index_s1] = '\0';
	return (s1);
}
