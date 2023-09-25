/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:51:50 by myokono           #+#    #+#             */
/*   Updated: 2023/09/25 14:32:40 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_maxmini(long num, char c)
{
	if ((num > LONG_MAX / 10 && ft_isdigit(c) == 1) || (num == LONG_MAX % 10 && c - '0' > LONG_MAX
			% 10))
		return (-1);
	// if ((num > LONG_MAX / 10 && ft_isdigit(c) == 1) || (num == LONG_MAX % 10 + 1 && c - '0' > LONG_MAX
	// 		% 10))
	// 	return (-2);
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
			// printf("1:%ld\n",num);
			// printf("%d\n",sign);
			return ((int)LONG_MAX);
		}
		if (sign == -1 && ft_maxmini(num, str[i]) == -1)
		{
			// printf("2:%ld\n",num);
			// printf("%d\n",sign);
			return ((int)LONG_MIN);
		}
	}
	// 2147483647
	//  799582594
	// printf("%ld\n",num);
	// printf("%d\n",sign);
	return ((int)num * sign);
}


// #include "libft.h"
// #include <stdio.h>

// static int ft_maxmini(long num, char c, int sign)
// {
//     long max_limit, max_last_digit;

//     if (sign == 1)
//     {
//         max_limit = LONG_MAX;
//         max_last_digit = LONG_MAX % 10;
//     }
//     else
//     {
//         max_limit = LONG_MIN;
//         max_last_digit = -(LONG_MIN % 10);
//     }

//     if ((num > max_limit / 10 && ft_isdigit(c) == 1) || (num == max_limit / 10 && c - '0' > max_last_digit))
//         return (-1);

//     return (0);
// }

// int ft_atoi(const char *str)
// {
//     size_t i;
//     int sign;
//     long int num;

//     i = 0;
//     sign = 1;
//     num = 0;

//     while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
//         i++;

//     if (str[i] == '-' || str[i] == '+')
//     {
//         if (str[i] == '-')
//             sign = -1;
//         i++;
//     }

//     while ('0' <= str[i] && str[i] <= '9')
//     {
//         num = num * 10 + (str[i] - '0');
//         i++;
//         if (ft_maxmini(num, str[i], sign) == -1)
//         {
//             return ((int)(sign == 1 ? LONG_MAX : LONG_MIN));
//         }
//     }

//     return ((int)num * sign);
// }

// int	main(void)
// {
// 	long i;
// 	long j;
// 	i = atoi("-9223372036854775809");
// 	j = ft_atoi("-9223372036854775809");

// 	printf("atoi: %ld\n", i);
// 	printf("ft_atoi: %ld\n\n", j);
// 	// printf("LONG_MAX: %ld\n", LONG_MAX);
// 	// printf("LONG_MIN: %ld\n", LONG_MIN);

// 	return (0);
// }
