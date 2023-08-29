/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:06:21 by myokono           #+#    #+#             */
/*   Updated: 2023/08/20 21:06:21 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char)c)
			return ((char *)s);
		s++;
	}
	if(c == '\0')
		return ((char *)s);
	return (NULL);
}
