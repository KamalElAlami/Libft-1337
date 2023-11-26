/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:17 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/26 14:33:44 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alptr;

	if (count && size && (count * size) > UINT_MAX)
		return (NULL);
	alptr = malloc(count * size);
	if (!alptr)
		return (NULL);
	else
		ft_bzero(alptr, count * size);
	return (alptr);
}
