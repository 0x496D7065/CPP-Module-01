/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 04:07:38 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 05:25:47 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _wep = NULL;
    std :: cout << "HumanB instance created" << std :: endl;
}

HumanB::~HumanB()
{
    std :: cout << "destructor called on " << getName() << std :: endl;
}

void    HumanB::setName(std::string newName)
{
    _name = newName;
}

void    HumanB::setWeapon(Weapon& wep) //wep is passed as a reference in this case
{                                      //otherwise a copy is created and destroy as soon as out of scope
    _wep = &wep;                       //as soon as out of scope
}

const std::string&  HumanB::getName()
{
    const std::string&  nameREF = _name;
    return (nameREF);
}

const std::string&  HumanB::getWep()
{
    return (_wep->getType());
}

void    HumanB::attack()
{
    if (_wep != NULL)
        std :: cout << getName() << " attacks with their " << getWep() << std :: endl;
    else
        std :: cout << getName() << " attacks with their bare fists" << std :: endl;
}