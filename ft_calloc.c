/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:48:48 by myokono           #+#    #+#             */
/*   Updated: 2023/08/17 12:48:48 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	if(nmemb >= (size_t)SIZE_MAX / 10 + (size_t)(1) && size >=10)
		return (NULL);
	ptr = malloc(nmemb * size);
	if(ptr == NULL)
		return (NULL);
	ft_memset(ptr,0, nmemb * size);
	return (ptr);
	

}