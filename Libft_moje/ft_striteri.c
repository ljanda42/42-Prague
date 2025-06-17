/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljanda <ljanda@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:22 by ljanda            #+#    #+#             */
/*   Updated: 2025/08/06 08:31:59 by ljanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/*
int main(void)
{
	char *str = "hello";

	ft_striteri(str, &ft_putstr);
	return (0);
}
*/
/* 
// Applies the function ’f’ to each character of the string passed as argument, passing its index as
// the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.

 void my_function(unsigned int index, char *c)
{
    *c += index % 10; // Jednoduchá modifikace znaků podle indexu
}

int main(void)
{
    char s[] = "Libft";
    printf("Original: \"%s\"\n", s);
    
    ft_striteri(s, my_function);
    
    printf("Modified: \"%s\"\n", s);
    
    return (0);
} */