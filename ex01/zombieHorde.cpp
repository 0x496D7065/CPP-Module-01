/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:53:48 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/01 01:02:45 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string int_to_string(int i)
{
    std::string result;

    if (i == 0)
    {
        result.insert(result.begin(), '0');
        return (result);
    }
    while (i > 0)
    {
        result.insert(result.begin(), '0' + (i % 10));
        i /= 10;
    }
    return (result);
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie      *z;
    std::string zname;
    int i = 0;

    z = new Zombie[N];
    if (!z)
    {
        std :: cout << "fail to allocate memory" << std :: endl;
        return (NULL);
    }
    while (i < N)
    {
        zname = name + int_to_string(i);
        z[i].set_name(zname);
        i++;
    }
    return (z);
}