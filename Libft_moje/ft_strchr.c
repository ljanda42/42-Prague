/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* 
// ft_strchr searches for the first occurrence of a character
// in a string and returns a pointer to its position

int	main(void)
{
    const char *str = "Hello, World!";
    char c = 'L';
    char *result;

    // Test case: Character found
    result = ft_strchr(str, c);
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    // Test case: Character not found
    c = 'x';
    result = ft_strchr(str, c);
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found.\n", c);

    // Test case: Searching for null terminator
    c = '\0';
    result = ft_strchr(str, c);
    if (result != NULL)
        printf("Null terminator found at position: %ld\n", result - str);
    else
        printf("Null terminator not found.\n");

    return (0);
}
 */