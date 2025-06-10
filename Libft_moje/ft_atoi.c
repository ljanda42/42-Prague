/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int is_neg;
    int res;

    i = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    is_neg = 1;
    if (str[i] == '-')
    {
        is_neg = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * is_neg);
}

/* 
// converts a string to an integer by interpreting its numeric characters

int main(void)
{
    const char *test_cases[] = {
        "42", "-42", "   123", "+123", "0", "-0",
        "2147483647", "-2147483648", "99999999999999",
        "abcd123", "123abcd", "", "   ",
        "12 34", "--12", "++12", " -+12"
    };
    size_t i;
    int result;

    printf("Testing ft_atoi:\n");
    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        result = ft_atoi(test_cases[i]);
        printf("\"%s\" -> %d\n", test_cases[i], result);
    }
    return (0);
} */