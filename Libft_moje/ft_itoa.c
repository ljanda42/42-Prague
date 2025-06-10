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

char    *ft_itoa(int n)
{
    char            *str;
    unsigned int    num;
    size_t          length;
    int             is_neg;

    is_neg = (n < 0);
    num = (is_neg) ? -n : n;
    length = 1 + is_neg;
    while (num >= 10 && ++length)
        num /= 10;
    if (!(str = ft_calloc(length + 1, sizeof(*str))))
        return (NULL);
    num = (is_neg) ? -n : n;
    str[length] = '\0';
    while (length--)
    {
        str[length] = '0' + (num % 10);
        num /= 10;
    }
    if (is_neg)
        str[0] = '-';
    return (str);
}
