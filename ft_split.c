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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset) && str[i])
		{
			i++;
		}
		if (!is_separator(str[i], charset) && str[i])
		{
			count++;
			while (!is_separator(str[i], charset) && str[i])
			{
				i++;
			}
		}
	}
	return (count);
}

char	*get_word(char *str, char *charset)
{
	int		i;
	char	*word;
	int		j;

	i = 0;
	j = 0;
	while (is_separator(str[i], charset) && str[i])
	{
		i++;
	}
	while (!is_separator(str[i + j], charset) && str[i + j])
	{
		j++;
	}
	word = (char *)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (!is_separator(str[i], charset) && str[i])
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}


char **ft_split(char const *s, char c)
{

}
char	**ft_split(char const *str, char *charset)
{
	int		word_count;
	char	**result;
	int		i;
	char	*word;

	word_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	result[word_count] = NULL;
	i = 0;
	while (*str)
	{
		if (is_separator(*str, charset))
		{
			str++;
			continue ;
		}
		word = get_word(str, charset);
		result[i] = word;
		i++;
		str += ft_strlen(word);
	}
	return (result);
}

