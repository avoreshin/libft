/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/14 22:13:51 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция isdigit() проверяет наличие десятичного значного символа. Независимо
** от локали, это включает только следующие символы:
**
** RETURN
**
** Возвращают ноль, если символ тестирует false, и ненулевой,
** если символ тестирует true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
