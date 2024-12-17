/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:33:34 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/14 08:49:46 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug( void )
{
    std :: cout << "DEBUG message" << std :: endl;
}

void    Harl::info( void )
{
    std :: cout << "INFO message" << std :: endl;
}
void    Harl::warning( void )
{
    std :: cout << "WARNING message" << std :: endl;
}

void    Harl::error( void )
{
    std :: cout << "ERROR message" << std :: endl;
}

void    Harl::complain( std::string level )
{
    void    (Harl::*ptrMap[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levelMap[] =  { "DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levelMap[i].compare(level) == 0)
            (this->*ptrMap[i])();
    }
}