/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:39:16 by myokono           #+#    #+#             */
/*   Updated: 2023/08/10 13:38:00 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	i = dest_len;
	src_len = ft_strlen(src);
	j = 0;
	if (size <= dest_len || size == 0)
		return (src_len + size);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//     char dest1[20] = "ABCDE";
//     char src1[] = "1234";
//     char dest2[20] = "ABCDE";
//     char src2[] = "1234";
//     char dest3[20] = "ABCDE";
//     char src3[] = "1234";
//     char dest4[20] = "ABCDE";
//     char src4[] = "1234";
//     char dest5[20] = "ABCDE";
//     char src5[] = "1234";
//     char dest6[20] = "ABCDE";
//     char src6[] = "1234";

//     int x = 2;
//     unsigned int result1 = ft_strlcat(dest1, src1, x);
//     printf("ft: %s: %u\n", dest1, result1);
//     unsigned int resule2 = strlcat(dest2, src2, x);
//     printf("lib %s: %u\n", dest2, resule2);

//     int y = 7;
//     unsigned int result3 = ft_strlcat(dest3, src3, y);
//     printf("ft: %s: %u\n", dest3, result3);
//     unsigned int result4 = strlcat(dest4, src4, y);
//     printf("lib %s: %u\n", dest4, result4);

//     int z = 13;
//     unsigned int result5 = ft_strlcat(dest5, src5, z);
//     printf("ft: %s: %u\n", dest5, result5);
//     unsigned int result6 = strlcat(dest6, src6, z);
//     printf("lib %s: %u\n", dest6, result6);
//     return (0);
// }