/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *str;
    size_t  len;

    len = ft_strlen(s1) + 1;
    str = (char *)malloc(len);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, len);
    return (str);
}
/* 
// duplicates a string by allocating memory for a copy and returning a pointer to it

int	main()
{
    const char *original = "Hello, world!";
    char *copy = strdup(original);

    if (copy) {
        printf("Original: %s\nCopy: %s\n", original, copy);
        free(copy);  // Always free allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */