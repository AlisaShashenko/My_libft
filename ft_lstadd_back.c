/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:21:35 by user              #+#    #+#             */
/*   Updated: 2024/05/06 20:07:50 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) ft_lstadd_back inserts a new element at the end of the
 * linked list.
 * 
 * @param lst A pointer to a pointer to the beginning of the list.
 * @param new Pointer to the new node to be inserted.
 */

/**
 * @brief Функция ft_lstadd_back вставляет новый элемент в конец
 * связного списка.
 * 
 * @param lst Указатель на указатель на начало списка
 * @param new Указатель на новый узел, который будет вставлен.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (!lst || !new)
		return ;
	last_elem = ft_lstlast(*lst);
	if (!last_elem)
		*lst = new;
	else
		last_elem->next = new;
}
