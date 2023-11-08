/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:09:16 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/06 19:13:10 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*ss1 == *ss2 && n - 1)
	{
		ss1++;
		ss2++; 
		n--;
	}
	return (*ss1 - *ss2);
}
// int	main(void)
// {
//     char    *s1 = "abcd2f";
//     char    *s2 = "abcdef";

//     // printf("%d\n", ft_memcmp(s1, s2, 5));
//     printf("%s", strstr(s1, s2, 5));
// }
