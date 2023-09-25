/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:51:50 by myokono           #+#    #+#             */
/*   Updated: 2023/09/25 01:49:28 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_maxmini(long num, char c)
{
	if ((num > LONG_MAX / 10) || (num == LONG_MAX / 10 && c - '0' > LONG_MAX
			% 10))
		return (-1);
	if ((num > LONG_MAX / 10) || (num == LONG_MAX / 10 && c - '0' > LONG_MAX
			% 10 + 1))
		return (-2);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (sign == 1 && ft_maxmini(num, str[i]) == -1)
		{
			printf("%ld\n",num);
			printf("%d\n",sign);
			return ((int)LONG_MAX);
		}
		if (sign == -1 && ft_maxmini(num, str[i]) == -2)
		{
			printf("%ld\n",num);
			printf("%d\n",sign);
			return ((int)LONG_MIN);
		}
	}
	printf("%ld\n",num);
	printf("%d\n",sign);
	return ((int)num * sign);
}

int	main(void)
{
	// Your code here!
	long i;
	long j;
	i = atoi("-9223372036854775809");
	j = ft_atoi("-9223372036854775809");

	printf("%ld\n", i);
	printf("%ld\n\n", j);
	// printf("%ld\n",LONG_MAX);
	// printf("%ld\n",LONG_MIN);
	printf("%d\n",(int)LONG_MAX);
	printf("%d\n",(int)LONG_MIN);

	return (0);
}
