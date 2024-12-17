/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 03:20:06 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 05:17:22 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club("crude spiked club");

		HumanA	red("Red", club);
		red.attack();
		club.setType("heavy metal club");
		red.attack();
	}
	{
		Weapon gun("M16");
		HumanB	blue("Blue");
		blue.setWeapon(gun);
		blue.attack();
		gun.setType("RPG-7");
		blue.attack();
	}
}