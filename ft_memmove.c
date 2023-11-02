/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:34:10 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/01 19:20:53 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *destt;
    unsigned char *srcc;

    srcc = ((unsigned char *)src);
    destt = ((unsigned char *)dest);
    if (destt > srcc)
    {
        while (n--)
        {
            destt[n] = srcc[n];
        } 
    }
    else 
        ft_memcpy(destt, srcc, n);
    return (destt);
}
int main(void)
{

    char src[] = "Hello, world!";
    char src1[] = "Hello, world!";


    ft_memmove(src + 6, src, 5);
    printf("%s|\n", src);
    memmove(src1 + 6, src1, 5);
    printf("%s|\n", src1);
}