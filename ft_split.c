/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:19:10 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/16 18:27:13 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	i = 0;
	j = 0;
	k = 0;
	if (!s || count_words(s, c) == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		j = i;
		while (s[i] && !(s[i] == c))
			i++;
		if (i > j)
			strs[k++] = ft_substr(s, j, i - j);
	}
	strs[k] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	char **dd = ft_split(" hello world helo kamal ", '	');
// 	int i = 0;
// 	if (dd[i])
// 	{
// 		while (dd[i])
// 			printf("%s\n", dd[i++]);	
// 	}
// }
