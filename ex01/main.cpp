/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:18:39 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/07 09:45:21 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// Fonction de rappel pour les entiers
void printInt(const int& x)
{
    std::cout << x << " ";
}

// Fonction de rappel pour les chaînes de caractères
void printString(const std::string& str)
{
    std::cout << str << " ";
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"hello", "world", "!"};

    // Tester avec différents types de données
    std::cout << "Printing integers: ";
    iter(intArray, 5, printInt);
    std::cout << std::endl;

    std::cout << "Printing strings: ";
    iter(strArray, 3, printString);
    std::cout << std::endl;

    // Tester avec différentes tailles de tableau
    std::cout << "Printing integers with different array sizes:" << std::endl;
    for (int size = 0; size <= 5; size++)
    {
        std::cout << "Size " << size << ": ";
        iter(intArray, size, printInt);
        std::cout << std::endl;
    }

    // Tester les cas limites
    int* emptyArray = NULL;
    std::cout << "Printing empty array: ";
    iter(emptyArray, 0, printInt); // Tester avec un tableau vide
    std::cout << std::endl;

    return 0;
}