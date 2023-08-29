/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:04:00 by myokono           #+#    #+#             */
/*   Updated: 2023/08/27 17:04:00 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char * substr;
	size_t size;

	if(!s)
		return (NULL);
	size = ft_strlen((char *)s);
	if(start >= size)
		return (ft_strdup(""));
	// len = (start + len > size) ? size - start : len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if(!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}