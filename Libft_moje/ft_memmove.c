/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

    if (d > s) {
        i = len;
        while (i > 0) {
            i--;
            d[i] = s[i];
        }
    } else {
        i = 0;
        while (i < len) {
            d[i] = s[i];
            i++;
        }
    }
    return dst;
}


/*
// memmove safely copies n bytes from src to dest, ensuring correct behavior even when memory regions overlap

int main() {
    char src1[] = "Hello, Libft!";
    char dest1[20];
    char src2[] = "Overlap test!";
    
    printf("=== Test 1: Non-overlapping copy ===\n");
    printf("Before memmove: %s\n", dest1);
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("After memmove: %s\n", dest1);
    
    printf("\n=== Test 2: Overlapping copy ===\n");
    printf("Before memmove: %s\n", src2);
    ft_memmove(src2 + 3, src2, 7);
    printf("After memmove: %s\n", src2);
    
    return 0;
}
*/