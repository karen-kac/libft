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

void	*ft_calloc(size_t num, size_t size)
{
	size_t		totalsize;
	void		*ptr;

	if (num >= (size_t)SIZE_MAX / 10 + (size_t)(1) && size >= 10)
		return (NULL);
	totalsize = num * size;
	ptr = malloc(totalsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, totalsize);
	return (ptr);
}
