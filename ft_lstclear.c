/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:19:58 by user              #+#    #+#             */
/*   Updated: 2024/05/06 20:04:32 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstclear clears the entire linked list, destroying
 * all elements in it.
 * 
 * @param lst Pointer to the pointer to the beginning of the list
 * @param del Pointer to the function that will be called to free
 * the memory allocated for the contents of each element.
 * 
 */

/**
 * @brief (RU) Функция ft_lstclear очищает весь связный список, уничтожая все
 * элементы в нем.
 * 
 * @param lst Указатель на указатель на начало списка.
 * @param del Указатель на функцию, которая будет вызвана для освобождения
 * памяти, выделенной для содержимого каждого элемента.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	free(*lst);
	*lst = NULL;
}
