/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-ala <kael-ala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 01:20:13 by kael-ala          #+#    #+#             */
/*   Updated: 2023/11/21 02:30:56 by kael-ala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    t_list  *tmp;

    count = 0;    
    tmp = lst;
    while (tmp)
    {
        count++;
        tmp = tmp->next;
    } 
    return (count);
}

// int main(void)
// {    
//     node *user1;
//     node *user2;
//     node *user3;
//     user1 = malloc(sizeof(node));
//     user2 = malloc(sizeof(node));
//     user3 = malloc(sizeof(node));
//     user1->next = user2;
//     user2->next = user3;
//     user3->next = NULL;
//     printf("%d", ft_lstsize(user1));
// }