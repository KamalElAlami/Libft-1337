/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:40:26 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/03 22:13:33 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	sl;

	sl = ft_strlen((char *)s);
	while (sl >= 0)
	{
		if (s[sl] == c)
			return ((char *)s + sl);
		sl--;
	}
	return (NULL);
}
