/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:58:43 by clagreou          #+#    #+#             */
/*   Updated: 2016/01/01 18:01:32 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(int n)
{
	int	count;

	count = 0;
	while (n /= 10)
		count++;
	return (count + 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	char	*ptr;
	int		size;

	size = ft_countdigit(n);
	str = ft_strnew(size + (n < 0 ? 1 : 0));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	ptr = str;
	if (n < 0)
	{
		*ptr++ = '-';
		n = -n;
	}
	ptr += size - 1;
	*(ptr + 1) = 0;
	while (size--)
	{
		*ptr-- = (char)(n % 10 + '0');
		n /= 10;
	}
	return (str);
}
