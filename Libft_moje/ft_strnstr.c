/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j] &&
            i + j < len && haystack[i + j] == needle[j])
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}
/* 
// searches for the first occurrence of a substring within a string, but only within a specified number of characters

int main()
{
    const char *big = "Hello, world!";
    const char *little = "world";
    char *result = strnstr(big, little, 12);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found.\n");

    return 0;
} */