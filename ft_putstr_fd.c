/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:31:09 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/17 17:39:12 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

// int main(void)
// {
// 	int fd = open("h.txt", O_WRONLY, 0644);
// 	char *str = "Hello World!";
// 	ft_putstr_fd(str, fd);
// 	return (0);
// }