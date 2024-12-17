/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:33:34 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/08 16:22:20 by lpetit           ###   ########.fr       */
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

void    Harl::uselessComplain( void )
{
    std :: cout << "useless message" << std :: endl;
}

int    Harl::logLevel( std::string level )
{
    std::string levelMap[] =  {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levelMap[i].compare(level) == 0)
            return (i);
    }
    return (-1);
}

void    Harl::complain( std::string level )
{
    switch(this->logLevel(level))
    {
        case 0:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 1:
            this->info();
            this->warning();
            this->error();
            break;
        case 2:
            this->warning();
            this->error();
            break;
        case 3:
            this->error();
            break;
        default:
            this->uselessComplain();
    }
}