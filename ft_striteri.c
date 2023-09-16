/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:54:37 by myokono           #+#    #+#             */
/*   Updated: 2023/09/16 16:00:14 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t i;
	
	if(!s || !f)
		return ;
	i = 0;
	while(s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
		
}