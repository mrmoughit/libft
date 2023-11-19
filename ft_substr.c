/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:05 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/16 16:55:05 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, (i + 1));
	return (p);
}
