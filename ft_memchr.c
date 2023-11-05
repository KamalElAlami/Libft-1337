/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:01:01 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/05 16:05:47 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (*ss == cc)
			return ((unsigned char *)ss);
		ss++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_memchr("hello world budd", 'e', 17));
// 	printf("%s", memchr("hello world budd", 'e', 17));
// }
