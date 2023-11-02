/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:53:30 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/02 21:26:56 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstl;
    size_t srcl;
    size_t rsize;
    size_t i;
    
    i = 0;
    dstl = 0;
    srcl = ft_strlen((char *)src);
    while (dst[dstl] && dstl < size)
    {
        dstl++;
    }
    rsize = size - dstl - 1;
    while (i < rsize && src[i])
    {
        dst[dstl++] = src[i];
        i++;
    }
    if (dstl < size)
    {
        dst[dstl] = '\0';
    }
    return (dstl + srcl);
}