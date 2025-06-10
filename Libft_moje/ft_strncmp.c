/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    if (i < n)
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    return (0);
}
/* 
// strncmp compares at most n characters of two strings and returns an integer indicating their lexicographical order

int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Hellp";
    int result;

    // Test case: Strings differ within `n` characters
    result = ft_strncmp(str1, str2, 4);
    printf("Comparing \"%s\" and \"%s\" (n = 4) -> Result: %d\n", str1, str2, result);

    // Test case: Identical strings within `n`
    result = ft_strncmp(str1, str2, 3);
    printf("Comparing \"%s\" and \"%s\" (n = 3) -> Result: %d\n", str1, str2, result);

    // Test case: Completely different strings
    str1 = "Apple";
    str2 = "Banana";
    result = ft_strncmp(str1, str2, 5);
    printf("Comparing \"%s\" and \"%s\" (n = 5) -> Result: %d\n", str1, str2, result);

    // Test case: Comparing empty strings
    str1 = "";
    str2 = "";
    result = ft_strncmp(str1, str2, 5);
    printf("Comparing \"%s\" and \"%s\" (n = 5) -> Result: %d\n", str1, str2, result);

    // Test case: One empty string
    str1 = "Hello";
    str2 = "";
    result = ft_strncmp(str1, str2, 5);
    printf("Comparing \"%s\" and \"%s\" (n = 5) -> Result: %d\n", str1, str2, result);

    return (0);
}
 */