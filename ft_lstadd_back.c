/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:47:12 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/18 23:59:42 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Добавляет элемент "новый" в конец списка.
 */

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *save;

	if(lst && *lst)
	{
		save = *lst;
		while(save -> next)
			save = save -> next;
		save -> next = new;

	}
	else if(lst)
			*lst = new;
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
//	ft_lstadd_back(&wer,poq);
//	ft_lstadd_back(&poq,poq1);
//	ft_lstadd_back(&poq1,poq2);
//	ft_lstadd_back(&poq2,poq3);
//
//	printf("%d",*(char *)wer ->content);
//
//	printf("%c",*(char *)wer -> next -> content);
//	printf("%c",*(char *)wer -> next -> next -> content);
//	printf("%c",*(char *)wer -> next -> next -> next -> content);
//	printf("%c",*(int *)wer -> next -> next -> next -> next->content);
//	return (0);
//}