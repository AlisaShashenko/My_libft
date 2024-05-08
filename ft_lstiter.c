/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:45:18 by user              #+#    #+#             */
/*   Updated: 2024/05/08 19:58:21 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) is intended for sequential traversal of elements of a linked
 * list and application of a specified function to each element.
 * 
 * @param lst Pointer to the first element of the list.
 * @param f Pointer to a function that will be applied to each element
 * of the list. This function must take one argument of type void *,
 * which will contain the data address of the element.
 */
/**
 * @brief (RU) ft_lstiter предназначена для последовательного обхода
 * элементов связного списка и применения к каждому элементу заданной функции. 
 * 
 * @param lst Указатель на первый элемент списка.
 * @param f Указатель на функцию, которая будет применяться к каждому элементу
 * списка. Эта функция должна принимать один аргумент типа void *, который
 * будет содержать адрес данных элемента.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
