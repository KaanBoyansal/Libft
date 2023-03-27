/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:24:45 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:24:46 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i] && i < nb)
	{
		i++;
	}
	while (src[j] && i + j + 1 < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < nb)
		dest[i + j] = '\0';
	return (i + ft_strlen((char *)src));
}
