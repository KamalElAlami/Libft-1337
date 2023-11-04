/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:53:30 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/04 16:21:04 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (!size)
		return (srcl);
	if (size <= (size_t)ft_strlen(dst))
		return (size + srcl);
	while (i < size - dstl - 1 && src[i])
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}

// int main()
// {
// 	char dest[15];

// 	// dest[0] = '\0';
//     // dest[11] = 'a';
// 	// char destt[15];

// 	// destt[0] = '\0';
//     // destt[11] = 'a';
// 	// int len = ft_strlcat(destt + 2, destt, 12);
// 	// int lenn = strlcat(dest + 2, dest, 12);
// 	dest[0] = '\0';
// 	dest[11] = 'a';
// 	int len = ft_strlcat(dest, "lorem ipsum", 15);
// 	// int len = strlcat(dest, "lorem ipsum", 15);
// 	write(1, "\n", 1);
// 	write(1, dest, 15);
// 	printf(" | %d", len);
// 	// printf("%s | %d | %s | %d", destt, len, dest, lenn);
// }
