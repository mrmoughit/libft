/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:13:53 by abechcha          #+#    #+#             */
/*   Updated: 2023/11/11 15:56:38 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkdouble(char s, char const *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (s == s1[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ktab(char *p, const char *s, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	start;
	char	*p;

	start = 0;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	j = ft_strlen(s1);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s1));
	while (s1[i] && ft_checkdouble(s1[i], set))
		i++;
	while (j > i && ft_checkdouble(s1[j - 1], set))
		j--;
	p = (char *)malloc((j - i + 1) * sizeof(char));
	if (!p)
		return (0);
	p = ktab(p, s1, i, j);
	return (p);
}
