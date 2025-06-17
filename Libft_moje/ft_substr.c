/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/* 
// Allocates memory (using malloc(3)) and returns a substring from the string
// ’s’. The substring starts at index ’start’ and has a maximum length of ’len’

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    *original = "Libft is awesome!";
    char    *substr

    substr = ft_substr(original, 6, 2);
    printf("Substring (start = 6, len = 2): \"%s\"\n", substr);
    free(substr);

    substr = ft_substr(original, 50, 5);
    printf("Substring (start = 50, len = 5): \"%s\"\n", substr);
    free(substr);

    substr = ft_substr(original, 10, 100);
    printf("Substring (start = 10, len = 100): \"%s\"\n", substr);
    free(substr);

    substr = ft_substr("", 2, 5);
    printf("Substring (start = 2, len = 5): \"%s\"\n", substr);
    free(substr);

    return (0);
}
 */