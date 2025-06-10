/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len_s1;
    size_t  len_s2;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!str)
        return (NULL);
    ft_memcpy(str, s1, len_s1);
    ft_memcpy(str + len_s1, s2, len_s2);
    str[len_s1 + len_s2] = '\0';
    return (str);
}
/* 
// Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’.

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (!result)
    {
        printf("Allocation failed.\n");
        return (1);
    }
    printf("Joined string: \"%s\"\n", result);
    free(result);
    return (0);
} */