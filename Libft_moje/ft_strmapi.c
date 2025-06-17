/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
// Applies the function f to each character of the string s,
// passing its index as the first argument and the character itself
// as the second. A new string is created (using malloc(3)) to store
// the results from the successive applications of f

char my_function(unsigned int index, char c)
{
    return (c + index % 10);
}

int main(void)
{
    char *s = "Libft";
    char *result;

    result = ft_strmapi(s, my_function);
    if (!result)
    {
        printf("Allocation failed.\n");
        return (1);
    }
    printf("Original: \"%s\"\n", s);
    printf("Modified: \"%s\"\n", result);
    free(result);
    return (0);
}
 */