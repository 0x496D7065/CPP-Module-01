/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 03:20:41 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 04:34:59 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
	std :: cout << "Weapon instance created" << std :: endl;
}

Weapon::~Weapon()
{
	std :: cout << "destructor called on " << getType() << std :: endl;
}

const std::string&	Weapon::getType()
{
	const std::string &typeREF = _type;
	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}