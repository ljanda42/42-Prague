/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ncolomer          #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char
	**ft_alloc_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i])
	{
		if (s[i] == c)
			total++;
		i++;
	}
	split = (char**)malloc(sizeof(s) * (total + 2));
	if (!split)
		return (NULL);
	return (split);
}

void
	*ft_free_all_split_alloc(char **split, size_t elts)
{
	size_t	i;

	i = 0;
	while (i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static void
	*ft_split_range(char **split, char const *s,
		t_split_next *st, t_split_next *lt)
{
	split[lt->length] = ft_substr(s, st->start, st->length);
	if (!split[lt->length])
		return (ft_free_all_split_alloc(split, lt->length));
	lt->length++;
	return (split);
}

static void
	*ft_split_by_char(char **split, char const *s, char c)
{
	size_t			i;
	t_split_next	st;
	t_split_next	lt;

	i = 0;
	lt.length = 0;
	lt.start = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			st.start = lt.start;
			st.length = (i - lt.start);
			if (i > lt.start && !ft_split_range(split, s, &st, &lt))
				return (NULL);
			lt.start = i + 1;
		}
		i++;
	}
	st.start = lt.start;
	st.length = (i - lt.start);
	if (i > lt.start && i > 0 && !ft_split_range(split, s, &st, &lt))
		return (NULL);
	split[lt.length] = 0;
	return (split);
}

char
	**ft_split(char const *s, char c)
{
	char	**split;

	if (!(split = ft_alloc_split(s, c)))
		return (NULL);
	if (!ft_split_by_char(split, s, c))
		return (NULL);
	return (split);
}
