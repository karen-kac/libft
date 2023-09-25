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

// void *ft_calloc(size_t nmemb, size_t size)
// {
// 	void *ptr;
// 	if(nmemb >= (size_t)SIZE_MAX / 10 + (size_t)(1) && size >=10)
// 		return (NULL);
// 	ptr = malloc(nmemb * size);
// 	if(ptr == NULL)
// 		return (NULL);
// 	ft_memset(ptr,0, nmemb * size);
// 	return (ptr);
// }



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


// void *ft_calloc(size_t nmemb, size_t size)
// {
//     size_t totalsize;
//     void *ptr;

//     // オーバーフローチェック
//     if (nmemb == 0 || size == 0 || nmemb > SIZE_MAX / size) {
//         return NULL;
//     }

//     totalsize = nmemb * size;
//     ptr = malloc(totalsize);
//     if (ptr == NULL) { // mallocが失敗した場合のエラーチェック
//         return NULL;
//     }

//     ft_memset(ptr, 0, totalsize);
//     return ptr;
// }

// #include<stdio.h>
// int main (){

// 	//void * i = calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);
// 	void * j = ft_calloc((size_t)SIZE_MAX / 10 + (size_t)1, 10);


// 	//printf("%p\n",i);
// 	printf("%p\n",j);

// }