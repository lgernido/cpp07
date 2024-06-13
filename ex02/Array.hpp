/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:52:32 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/13 09:42:13 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

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

template <typename T>

class Array 
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();
        
        unsigned int size() const;
        
        T& operator[](unsigned int i);
        Array& operator=(const Array& other);

        template <class U>
        friend std::ostream& operator<<(std::ostream& stream, const Array<U>& arr);

    private:
        T* array;
        unsigned int array_size;
};

template <class T>
Array<T>::Array() : array(NULL), array_size(0) {}

template <class T>
Array<T>::Array(unsigned int n) : array_size(n) 
{
    array = new T[array_size];
}

template <class T>
Array<T>::Array(const Array& other) : array_size(other.array_size) 
{
    array = new T[array_size];
    for (unsigned int i = 0; i < array_size; ++i) 
    {
        array[i] = other.array[i];
    }
}

template <class T>
Array<T>::~Array() 
{
    delete[] array;
}

template <class T>
unsigned int Array<T>::size() const 
{
    return array_size;
}

template <class T>
T& Array<T>::operator[](unsigned int i) 
{
    if (i >= array_size)
        throw std::out_of_range("Index out of range");
    return array[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] array;
        array_size = other.array_size;
        array = new T[array_size];
        for (unsigned int i = 0; i < array_size; ++i) 
        {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <class T>
std::ostream& operator<<(std::ostream& stream, const Array<T>& arr) 
{
    for (unsigned int i = 0; i < arr.array_size; ++i) 
    {
        stream << arr.array[i] << " ";
    }
    return stream;
}

#endif
