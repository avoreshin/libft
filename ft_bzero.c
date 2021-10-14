/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/14 21:52:02 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** RUS
**
** Функция bzero() записывает n обнуленных байтов в строку s.
** Если n равно нулю, то b zero() ничего не делает.
**
** RETURN
**
** Функция ничего не возвращает.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
