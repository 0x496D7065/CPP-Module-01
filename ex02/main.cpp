/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 02:14:45 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 02:56:46 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main()
{
	std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std :: cout << std::left << std::setw(30) << "address of the string: " << &str << "\n"
    			<< std::left << std::setw(30) << "address held by stringPTR: " << stringPTR << "\n"
				<< std::left << std::setw(30) << "address held by stringREF: " << &stringREF << std :: endl;

	std :: cout << std::left << std::setw(30) << "value of the string: " << str << "\n"
    			<< std::left << std::setw(30) << "value pointed by stringPTR: " << *stringPTR << "\n"
				<< std::left << std::setw(30) << "value pointed by stringREF: " << stringREF << std :: endl;
}