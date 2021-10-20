/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:59:29 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/19 00:10:19 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Подсчитывает количество элементов в списке.
*/

int ft_lstsize(t_list *lst)
{
	int	lenlist;

	lenlist = 0;
	while (lst)
	{
		lenlist++;
		lst = lst -> next;
	}
	return (lenlist);
}

//#include <stdio.h>
//int main (void)
//{
//	t_list *wer;
//	t_list *poq;
//	t_list *poq1;
//	t_list *poq2;
//	t_list *poq3;
//	int	i;
//	char j;
//	char j1;
//	char j2;
//	char j3;
//
//	i = 100;
//	j = 'A';
//	j1 = 'B';
//	j2 = 'C';
//	j3 = 'D';
//
//	wer = ft_lstnew(&i);
//	poq = ft_lstnew(&j);
//	poq1 = ft_lstnew(&j1);
//	poq2 = ft_lstnew(&j2);
//	poq3 = ft_lstnew(&j3);
//
//	ft_lstadd_front(&wer,poq);
//	ft_lstadd_front(&poq,poq1);
//	ft_lstadd_front(&poq1,poq2);
//	ft_lstadd_front(&poq2,poq3);

//	printf("%d", ft_lstsize(poq3));
//	return (0);
//}