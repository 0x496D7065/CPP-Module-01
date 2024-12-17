/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 04:07:38 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 04:48:50 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wep) : _name(name), _wep(wep)
{
    std :: cout << "HumanA instance created" << std :: endl;
}

HumanA::~HumanA()
{
    std :: cout << "destructor called on " << getName() << std :: endl;
}

void    HumanA::setName(std::string newName)
{
    _name = newName;
}

void    HumanA::setWeapon(Weapon wep)
{
    _wep = wep;
}

const std::string&  HumanA::getName()
{
    const std::string&  nameREF = _name;
    return (nameREF);
}

const std::string&  HumanA::getWep()
{
    return (_wep.getType());
}

void    HumanA::attack()
{
    std :: cout << getName() << " attacks with their " << getWep() << std :: endl;
}