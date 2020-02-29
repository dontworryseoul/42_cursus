/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 07:12:13 by mihykim           #+#    #+#             */
/*   Updated: 2020/02/28 10:20:02 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Allocates (with malloc) a substring from string 's'.
**   The substring begins at index 'start' and is of maximum size 'len'.
** - Returns the substring, or NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	if (s == 0)
		return (0);
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_s == 0)
		return (0);
	i = 1;
	while (i < len && i + start < ft_strlen(s))
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = 0;
	return (sub_s);
}
