/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:20:30 by myokono           #+#    #+#             */
/*   Updated: 2023/08/29 13:20:30 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int ft_is_separator(char s, char c)
// {
// 	if(s ==c)
// 		return (1);
// 	return (0);
// }

static int ft_count_words(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if(s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_get_word(char *s, char c)
{
	int		i;
	int     j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] && s[i + j] != c)
		j++;
	word = (char *)malloc(sizeof(char) * (j + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (s[i] && s[i] != c)
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}
char **ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	char	*word;

	if(!s)
		return (NULL);
	word_count = ft_count_words((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	result[word_count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		word = ft_get_word((char *)s, c);
		if (!word)
			return (NULL);
		result[i] = word;
		i++;
		s += ft_strlen(word);
	}
	return (result);
}


