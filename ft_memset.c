/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:48:19 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/25 17:48:30 by kael-ala         ###   ########.fr       */
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
	return (d);
}

// int main(void)
// {
// 	int *buff;
// 	buff = malloc(sizeof(int) * 4);
// 	buff = ft_memset(buff, 160, 1);
// 	buff = ft_memset(buff, 57, 2);
// 	printf("%d", buff);
// }