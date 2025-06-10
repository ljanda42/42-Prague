/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_char_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    size_t  start;
    size_t  end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_char_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_char_in_set(s1[end - 1], set))
        end--;
    str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1 + start, end - start + 1);
    return (str);
}
/* 
// Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.

int main(void)
{
    char *s1 = "   Hello, world!   ";
    char *set = " ";
    char *result;

    result = ft_strtrim(s1, set);
    if (!result)
    {
        printf("Allocation failed.\n");
        return (1);
    }
    printf("Trimmed string: \"%s\"\n", result);
    free(result);
    return (0);
}
 */