/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_word_count(char const *s, char c)
{
    size_t  count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s && *s != c)
            s++;
    }
    return (count);
}

static char *ft_word_dup(const char *s, char c)
{
    size_t  len;
    char    *word;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    ft_strlcpy(word, s, len + 1);
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t  i;

    if (!s)
        return (NULL);
    arr = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
    if (!arr)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            arr[i++] = ft_word_dup(s, c);
            while (*s && *s != c)
                s++;
        }
    }
    arr[i] = NULL;
    return (arr);
}
/* 
// Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using
// the character ’c’ as a delimiter. The array must end with a NULL pointer

int main(void)
{
    char    *str = "Hello 42 Prague!";
    char    delimiter = ' ';
    char    **split;
    size_t  i;

    split = ft_split(str, delimiter);
    if (!split)
    {
        printf("Allocation failed.\n");
        return (1);
    }

    i = 0;
    while (split[i])
    {
        printf("Word %zu: \"%s\"\n", i + 1, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    return (0);
} */