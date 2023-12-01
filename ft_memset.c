/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:48:19 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/30 18:23:58 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*d;

	d = (unsigned char *)s;
	i = 0;
	while (i < len)
		d[i++] = (unsigned char)c;
	return ((void *)d);
}
// #include <stdio.h>
// int main(void)
// {
// 	int *b;
// 	b = calloc(4, 1);
// 	ft_memset(&b, 0, 4);
// 	ft_memset(&b, 0, 3);
// 	ft_memset(&b, 57, 1);
// 	ft_memset(&b, 5, 2);
// 	printf("%d", b);
// }