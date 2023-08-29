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
	size_t i;
	size_t j;

	i = 0;
	if(*little == '\0' || len == 0)
		return ((char *)big);
	while(big[i] && (i < len))
	{
		j = 0;
	
		while(big[i + j] == little[j] && i + j < len)
		{
			j++;
			if(little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
 }