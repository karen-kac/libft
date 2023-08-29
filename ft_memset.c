/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:08:18 by myokono           #+#    #+#             */
/*   Updated: 2023/08/17 12:08:18 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;
	p = s;
	while(n)
	{
		*(p++) = (unsigned char)c;
		n--;
	}
	return (s);
}
// #include<stdio.h>
// int main(){
// 	char buf[] = "ABCDEFGHIJK";

// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	ft_memset(buf+2,300,3);


// 	//表示
// 	printf("buf文字列→%s\n",buf);
	

// 	return 0;
	
// }