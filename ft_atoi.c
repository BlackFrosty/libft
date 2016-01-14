/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/15 19:35:14 by clagreou          #+#    #+#             */
/*   Updated: 2016/01/02 13:30:20 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		is_negative;
	int		value;
	char	*s;

	is_negative = 0;
	value = 0;
	s = (char *)str;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
		is_negative = 1;
	if (*s == '-' || *s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		value = (value * 10) + (*s - '0');
		s++;
	}
	if (is_negative)
		value = -value;
	return (value);
}
