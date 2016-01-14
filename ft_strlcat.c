/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 21:48:48 by clagreou          #+#    #+#             */
/*   Updated: 2015/12/05 13:22:33 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end_dst;

	i = 0;
	end_dst = ft_strlen(dst);
	if (size <= end_dst)
		return (size + ft_strlen(src));
	while ((i + end_dst) < (size - 1) && src[i] != '\0')
	{
		dst[i + end_dst] = src[i];
		i++;
	}
	dst[i + end_dst] = '\0';
	return (end_dst + ft_strlen(src));
}
