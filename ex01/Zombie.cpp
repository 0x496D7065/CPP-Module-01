/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:30:40 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/30 23:39:16 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie instance created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "destructor called on " << get_name() << std::endl;
}

std::string	Zombie::get_name()
{
	return (name);
}

void	Zombie::set_name( std::string name_to_set )
{
	name = name_to_set;
}

void	Zombie::announce( void )
{
	std::cout << get_name() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}