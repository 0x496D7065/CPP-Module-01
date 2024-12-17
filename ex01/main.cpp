/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:25:14 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/01 01:05:22 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    massAnnounce(int N, Zombie *z)
{
	for (int i = 0; i < N; i++)
		z[i].announce();
}

int main()
{
    Zombie	*ptr;
    int		N = 20;

    ptr = zombieHorde(N, "Red");
    if (!ptr)
        return (1);
    massAnnounce(N,ptr);
	delete[] ptr;
}