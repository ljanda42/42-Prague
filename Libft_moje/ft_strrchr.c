/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *last_occurrence;

    last_occurrence = NULL;
    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (last_occurrence);
}
/* 
// ft_strrchr finds the last occurrence of a character in a string and returns a pointer to it

int main(void)
{
    const char *str = "Hello, World!";
    char c;
    char *result;

    // Test case: Character appears multiple times
    c = 'l';
    result = ft_strrchr(str, c);
    if (result != NULL)
        printf("Last occurrence of '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    // Test case: Character appears once
    c = 'W';
    result = ft_strrchr(str, c);
    if (result != NULL)
        printf("Last occurrence of '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    // Test case: Character not in string
    c = 'x';
    result = ft_strrchr(str, c);
    if (result != NULL)
        printf("Last occurrence of '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    // Test case: Searching for null terminator
    c = '\0';
    result = ft_strrchr(str, c);
    if (result != NULL)
        printf("Null terminator found at position: %ld\n", result - str);
    else
        printf("Null terminator not found.\n");

    return (0);
} */