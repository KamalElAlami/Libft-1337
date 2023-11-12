/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:19:10 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/12 16:09:45 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
		{
			i++;
		}
		if (s[i])
			count++;
		while (s[i] && !(s[i] == c))
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
	strs = malloc(sizeof(char **) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		j = i;
		while (s[i] && !(s[i] == c))
			i++;
		strs[k++] = ft_substr(s, j, i - j);
	}
	strs[k] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	char	**dd;
// 	int		i;
// 	i = 0;
// 	dd = ft_split("lorem ipsum dolor sit amet, 
// consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	while (dd[i])
// 		printf("%s\n", dd[i++]);
// }
