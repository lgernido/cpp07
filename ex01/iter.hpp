/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:18:10 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/07 09:43:21 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>
#include <string>

template<typename T>
void iter(T* array, int size, void(*f)(T const&))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

#endif