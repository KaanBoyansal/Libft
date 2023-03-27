/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:23:35 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:23:42 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	if (!dest && !src)
		return (0);
	csrc = (char *)src;
	cdest = (char *)dest;
	while (n)
	{
	*(cdest++) = *(csrc++);
	n--;
	}
	return (dest);
}
