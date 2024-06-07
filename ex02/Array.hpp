/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:52:32 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/07 11:35:18 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

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
        unsigned int size;
};

template <class T>
Array<T>::Array() : array(nullptr), size(0) {}

template <class T>
Array<T>::Array(unsigned int n) : size(n) 
{
    array = new T[size];
}

template <class T>
Array<T>::Array(const Array& other) : size(other.size) 
{
    array = new T[size];
    for (unsigned int i = 0; i < size; ++i) 
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
    return size;
}

template <class T>
T& Array<T>::operator[](unsigned int i) 
{
    if (i >= size)
        throw std::out_of_range("Index out of range");
    return array[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] array;
        size = other.size;
        array = new T[size];
        for (unsigned int i = 0; i < size; ++i) 
        {
            array[i] = other.array[i];
        }
    }
    return *this;
}

template <class T>
std::ostream& operator<<(std::ostream& stream, const Array<T>& arr) 
{
    for (unsigned int i = 0; i < arr.size; ++i) 
    {
        stream << arr.array[i] << " ";
    }
    return stream;
}

#endif
