/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:48:19 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/18 18:28:44 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

// int main()
// {

// 	int i = 0;
// 	int tab[] = {10,11};
// 	int j = 0;
// 	ft_memset(tab + 1, 5, 2);
// 	ft_memset(tab + 1, 57, 1);

// 	printf("%d\n", tab[1]);
// }
