/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_length(int n)
{
	unsigned int	num;
	size_t			length;

	length = 1;
	if (n < 0)
		length++;
	num = n;
	if (n < 0)
		num = -n;
	while (num >= 10)
	{
		num /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			length;
	unsigned int	num;

	length = ft_num_length(n);
	str = (char *)ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	num = n;
	if (n < 0)
		num = -n;
	str[length] = '\0';
	while (length--)
	{
		str[length] = '0' + (num % 10);
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* 
// Allocates memory (using malloc(3)) and returns a string representing
// the integer received as an argument. Negative numbers must be handled.

int main(void)
{
    int     numbers[] = {0, -42, 12345, -2147483648, 2147483647};
    char    *result;
    size_t  i;

    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        result = ft_itoa(numbers[i]);
        if (!result)
        {
            printf("Allocation failed for %d\n", numbers[i]);
            return (1);
        }
        printf("ft_itoa(%d) = \"%s\"\n", numbers[i], result);
        free(result);
    }
    return (0);
} */