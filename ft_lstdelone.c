/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:06:07 by user              #+#    #+#             */
/*   Updated: 2024/05/06 19:59:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstdelone destroys one element in a linked list.
 * 
 * @param lst Pointer to the pointer to the node to be deleted
 * @param del Pointer to the function that will be called to free the
 * memory allocated for the item being deleted.
 */

/**
 * @brief (RU) ft_lstdelone уничтожает один элемент в связном списке.
 * 
 * @param lst Указатель на указатель на узел, который нужно удалить
 * Важно: lst - это указатель на указатель, так как он должен изменить
 * сам указатель на узел.
 * @param del Указатель на функцию, которая будет вызвана для
 * освобождения памяти, выделенной для удаляемого элемента.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
