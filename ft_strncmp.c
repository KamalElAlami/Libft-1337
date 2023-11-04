/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:42:39 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/04 19:53:17 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (*s1 && (*s1 == *s2) && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
//     char    *s1 = "abcdef";
//     char    *s2 = "abc\375xx";

//     printf("%d\n", ft_strncmp(s1, s2, 5));
//     printf("%d", strncmp(s1, s2, 5));
// }
