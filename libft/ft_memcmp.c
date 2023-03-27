/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:23:29 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:23:32 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int l)
{
	unsigned int	i;
	unsigned char	*as1;
	unsigned char	*as2;

	as1 = (unsigned char *)s1;
	as2 = (unsigned char *)s2;
	i = 0;
	while (i < l && *(as1 + i) == *(as2 + i))
		i++;
	if (i == l)
		return (0);
	return (*(as1 + i) - *(as2 + i));
}
