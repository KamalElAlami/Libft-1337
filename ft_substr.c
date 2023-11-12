/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:55:37 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/09 16:24:37 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subptr;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	subptr = malloc(sizeof(char) * (len + 1));
	if (!subptr)
		return (NULL);
	ft_strlcpy(subptr, s + start, len + 1);
	return (subptr);
}
// int main()
// {
// 	char	str[5] = "Hello";
// 	char *res = ft_substr(str, 2, 4);
// 	printf("%s\n", res);
// }