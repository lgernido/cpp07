/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:18:10 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/13 09:49:30 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define ORANGE "\033[38;5;208m"
#define BLUE	"\033[0;34m"
#define MAGENTA	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define WHITE	"\033[0;37m"
#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"
#define RESET      "\033[0m"

template<typename T>
void iter(T* array, int size, void(*f)(T const&))
{
	for (int i = 0; i < size; ++i)
		f(array[i]);
}

template<typename T>
void iter(T* array, int size, void(*f)(T &))
{
	for (int i = 0; i < size; ++i)
		f(array[i]);
}

#endif