/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:24:40 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:24:42 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*ptr;

	i = 0;
	j = 0;
	size = ft_strlen((char *)s1);
	size += ft_strlen((char *)s2);
	ptr = malloc(size + 1);
	if (!ptr)
		return (0);
	while (s1[i] != '\0')
	{
	ptr[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
