/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;

    ptr = malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

/* 
// ft_calloc allocates memory for an array and initializes all bytes to zero

int main(void)
{
    int *arr;
    size_t  items = 5;

    arr = (int *)ft_calloc(items, sizeof(int));
    if (!arr)
        return (1);

    for (size_t i = 0; i < items; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
} */