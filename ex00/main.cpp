/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:25:14 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/01 00:09:01 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	z;

	z.set_name(name);
	z.announce();
}

Zombie* newZombie( std::string name )
{
    Zombie  *z;

    z = new Zombie;
    if (!z)
    {
        std :: cout << "fail to allocate memory" << std :: endl;
        return (NULL);
    }
    z->set_name(name);
    return (z);
}

void    Out_of_scope_announce(Zombie *ptr)
{
    ptr->announce();
    delete ptr;
}

int main()
{
    Zombie    *ptr;
    randomChump("Red");
    ptr = newZombie("Blue");
    if (!ptr)
        return (1);
    Out_of_scope_announce(ptr);
}