/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:00:23 by lgernido          #+#    #+#             */
/*   Updated: 2024/06/13 09:42:59 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
    {
        /*TESTING WORKING ELEMENTS*/
    std::cout << std::endl << RED "---------------------------------------------------"<< std::endl;
	std::cout <<"BASIC TEST:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING A CLASSIC ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
        try 
        {
            Array<int> a(5);
            for (unsigned int i = 0; i < a.size(); ++i) 
            {
                a[i] = i * 2;
            }

            std::cout << "Array elements: " << a << std::endl;
            std::cout << "Array size: " << a.size() << std::endl;

        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    }
    {
        /*TESTING EMPTY ARRAY*/
    std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING EMPTY ARRAY:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
        try 
        {
            Array<int> a;

            std::cout << "Array elements: " << a << std::endl;
            std::cout << "Array size: " << a.size() << std::endl;

        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    }
    {
        /*TESTING OUT OF RANGE ELEMENT*/
        std::cout << "---------------------------------------------------" RESET << std::endl;
	std::cout << std::endl;

	std::cout << GREEN "TESTING OUT OF RANGE ELEMENT:" << std::endl;
	std::cout << "---------------------------------------------------" RESET << std::endl;
        try 
        {
            Array<int> a(5);
            for (unsigned int i = 0; i < a.size(); ++i) 
            {
                a[i] = i * 2;
            }

            std::cout << "Array elements: " << a[8] << std::endl;
            std::cout << "Array size: " << a.size() << std::endl;

        } 
        catch (const std::exception& e) 
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    }

    return 0;
}
