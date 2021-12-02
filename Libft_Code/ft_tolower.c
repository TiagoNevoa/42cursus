/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:56:27 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/02 17:02:14 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += - 'A' + 'a';
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		printf("c = %c --> %c\n", c, ft_tolower(c));
		c++;
	}
}
*/
