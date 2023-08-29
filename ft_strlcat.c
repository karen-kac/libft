/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:39:16 by myokono           #+#    #+#             */
/*   Updated: 2023/08/24 17:12:41 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	i;
// 	size_t	j;

// 	dst_len = ft_strlen(dst);
// 	i = dst_len;
// 	src_len = ft_strlen((char *)src);
// 	j = 0;
// 	if(size == 0)
// 		return (src_len);
// 	if (size <= dst_len)
// 		return (src_len + size);
// 	while ((i < size - 1) && src[j])
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (dst_len + src_len);
// }


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	if(dst == NULL && size == 0)
		return 0;
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	i = dst_len;
	j = 0;
	if (!dst)
		return (src_len);
	if (size <= dst_len)
		return (src_len + size);

	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <strings.h>
// // size_t strlcat(char *dst, const char *src, size_t size);

// int main()
// {
//     size_t a;
//     size_t c;
//     char b[0xF] = "nyan !";

//     a = ft_strlcat(((void*)0), b, 0);
//     c = strncat(((void*)0), b, 0);

//     printf("%zu\n", a);
//     printf("%zu\n", c);
//     return 0;
// }
