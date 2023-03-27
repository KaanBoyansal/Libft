/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:24:20 by mboyansa          #+#    #+#             */
/*   Updated: 2022/10/26 17:52:39 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_len(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (s[i + 1] != c && s[i + 1])
			{
				while (s[i +1] != c && s[i + 1])
					i++;
			}
			count++;
			i++;
		}
	}
	return (count);
}

int	skip_delimeter(char *s, char c, int i)
{
	while (s[i] == c && s[i])
	i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	**arr;

	i = 0;
	j = 0;
	k = 0;
	count = word_count(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (0);
	while (s[i] && j != count)
	{
		i = skip_delimeter((char *)s, c, i);
		arr[j] = malloc(word_len(s, c, i) + 1);
		while (s[i] != c && s[i])
			arr[j][k++] = s[i++];
		arr[j][k] = '\0';
		j++;
		k = 0;
	}
	arr[count] = NULL;
	return (arr);
}
