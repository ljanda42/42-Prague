/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* 
// ft_memcmp compares two memory blocks byte by byte and
// returns an integer indicating their relative order

int main(void)
{
    const char s1[] = "Hello, world!";
    const char s2[] = "Hello, Warld!";
    int result;

    // Test case: Identical memory blocks
    result = ft_memcmp(s1, s1, sizeof(s1));
    printf("Comparing identical memory blocks -> Result: %d\n", result);

    // Test case: Different content
    result = ft_memcmp(s1, s2, sizeof(s1));
    printf("Comparing \"%s\" and \"%s\" -> Result: %d\n", s1, s2, result);

    // Test case: Different content, limited `n`
    result = ft_memcmp(s1, s2, 7);
		printf("Comparing first 7 bytes of \"%s\"
		 and \"%s\" -> Result: %d\n", s1, s2, result);

    // Test case: Empty memory blocks
    const char empty1[] = "";
    const char empty2[] = "";
    result = ft_memcmp(empty1, empty2, 1);
    printf("Comparing empty memory blocks -> Result: %d\n", result);

    // Test case: One empty block
    result = ft_memcmp(s1, empty1, 5);
    printf("Comparing \"%s\" with empty block -> Result: %d\n", s1);

    return (0);
} */