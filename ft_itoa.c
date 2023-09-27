/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:54:48 by myokono           #+#    #+#             */
/*   Updated: 2023/08/24 01:54:48 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char	*ft_itoa(int n)
{
	int		nb;
	int		size;
	char	*str;

	nb = n;
	size = 1;
	while (nb /= 10)
		size++;
	if (n < 0)
		size++;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			str[size--] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (n)
	{
		str[size--] = '0' + n % 10;
		n /= 10;
	}
	return (str);
}
