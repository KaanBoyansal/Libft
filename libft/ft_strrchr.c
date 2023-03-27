/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:25:16 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:25:18 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( char *str, int c)
{
	int		l;
	char	*p;

	l = ft_strlen((char *) str);
	p = str + l - 1;
	if (c == 0)
		return ((char *)str + l);
	while (l != 0)
	{
		if (*p == (char) c)
			return ((char *) p);
		p--;
		l--;
	}
	return (0);
}
