/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:47:30 by myokono           #+#    #+#             */
/*   Updated: 2023/08/27 22:47:30 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// char *ft_strtrim(char const *s1, char const *set)
// {
// 	char *ptr;
// 	size_t start;
// 	size_t end;
// 	size_t i;

// 	// if(!s1)
// 	// 	return (NULL);
// 	// if(!set)
// 	// 	return (ft_strdup(s1));

// 	if (s1 == NULL || set == NULL)
//         return (NULL);
//     if (s1[0] == '\0' && set[0] == '\0')
//         return (ft_strdup(""));

// 	end = ft_strlen((char *)s1);

// 	start = 0;
// 	while(s1[start] && ft_strchr(set, s1[start]) != 0)
// 		start++;
// 	while(end >= start && ft_strchr(set, s1[end - 1]) != 0)
// 		end--;
// 	if (start >= end)
//         return (ft_strdup(""));
// 	ptr = (char *)malloc(sizeof(char)*(end - start + 1));
// 	if(!ptr)
// 		return (NULL);
// 	i = 0;
// 	while(start < end)
// 		ptr[i++] = s1[start++];
// 	ptr[i] = '\0';
// 	return (ptr);
// }

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    size_t start;
    size_t end;
    size_t i;

    if (s1 == NULL || set == NULL)
        return (NULL);

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]) != NULL)
        start++;

    end = ft_strlen((char *)s1);

    while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
        end--;

    if (start >= end)
        return (ft_strdup(""));

    ptr = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!ptr)
        return (NULL);

    i = 0;
    while (start < end)
        ptr[i++] = s1[start++];

    ptr[i] = '\0';
    return (ptr);
}