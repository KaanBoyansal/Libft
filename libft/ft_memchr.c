/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:23:25 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/25 21:23:27 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*p;
	char	*charfind;

	p = (char *) s;
	charfind = 0;
	while ((s != 0) && n--)
	{
		if (*p == (char) c)
		{
			charfind = p;
			break ;
		}
		p++;
	}
	return (charfind);
}
