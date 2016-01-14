/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagreou <clagreou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 12:50:49 by clagreou          #+#    #+#             */
/*   Updated: 2016/01/02 12:55:58 by clagreou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if ((unsigned char)c == ' ' ||
		(unsigned char)c == '\n' ||
		(unsigned char)c == '\v' ||
		(unsigned char)c == '\t' ||
		(unsigned char)c == '\f' ||
		(unsigned char)c == '\r')
		return (1);
	return (0);
}
