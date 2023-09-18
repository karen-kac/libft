/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:18:50 by myokono           #+#    #+#             */
/*   Updated: 2023/08/21 01:18:50 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
 {
	size_t	nedlen;
	if(len == 0)
		return (NULL);
	nedlen = ft_strlen(little);
	if(nedlen == 0)
		return ((char *)big);
	while(*big != '\0')
	{
		if(len < nedlen)
			break;
		if (ft_strncmp(big, little, nedlen) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
 }

#include <stdio.h>
 int main(){
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("TEST: %s\n",ft_strnstr(haystack, needle, 0));
	return 0;
 }