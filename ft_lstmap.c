/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:21:26 by user              #+#    #+#             */
/*   Updated: 2024/05/09 11:30:07 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief (EN) The function is designed to create a new list that is a
 * representation of the original list. In other words, it traverses the
 * original list, applies the specified function to each element, and adds
 * the result to the new list.
 * 
 * @param lst Pointer to the first element of the source list.
 * @param f Pointer to the function that will be applied to each element
 * of the source list.
 * @param del Pointer to the memory release function that will be used to
 * release the memory allocated for the items in the new list in case of an
 * error.
 * @return t_list* 
 */
/**
 * @brief (RU) Функция предназначена для создания нового списка, который
 * является отображением исходного списка.
 * Другими словами, она проходит по исходному списку, применяет к каждому
 * элементу указанную функцию и добавляет результат в новый список.
 * 
 * @param lst Указатель на первый элемент исходного списка.
 * @param f казатель на функцию, которая будет применяться к каждому
 * элементу исходного списка.
 * @param del Указатель на функцию освобождения памяти, которая будет
 * использоваться для освобождения памяти, выделенной для элементов нового
 * списка в случае ошибки.
 * @return t_list* 
 */

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    
}