/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedsec <dedsec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:09:16 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/06 00:57:54 by dedsec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *ss1;
    char *ss2;

    ss1 = (char *)s1;
    ss2 = (char *)s2;
	if (!n)
        return (0);
    while (*ss1 && (*ss1 == *ss2) && n)
    {
        ss1++;
        ss2++; 
        n--;
    }
    return (*ss1 - *ss2);
}
int	main(void)
{
    char    *s1 = "abcd2f";
    char    *s2 = "abcdef";

    // printf("%d\n", ft_memcmp(s1, s2, 5));
    printf("%s", strstr(s1, s2, 5));
}
