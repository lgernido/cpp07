/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:18:39 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/13 09:50:10 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(const int& x)
{
    std::cout << x << " ";
}

void printString(const std::string& str)
{
    std::cout << str << " ";
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"hello", "world", "!"};

    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING INTEGERS ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Printing integers: ";
    iter(intArray, 5, printInt);
    std::cout << std::endl;
    
    std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING STRING ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Printing strings: ";
    iter(strArray, 3, printString);
    std::cout << std::endl;

    /*TESTING WITH DIFFERENT SIZES*/
    std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING DIFFERENT SIZES:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    std::cout << "Printing integers with different array sizes:" << std::endl;
    for (int size = 0; size <= 5; size++)
    {
        std::cout << "Size " << size << ": ";
        iter(intArray, size, printInt);
        std::cout << std::endl;
    }

    /*TESTING EMPTY ARRAY*/
    std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING EMPTY ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
    int* emptyArray = NULL;
    std::cout << "Printing empty array: ";
    iter(emptyArray, 0, printInt);
    std::cout << std::endl;

    return 0;
}