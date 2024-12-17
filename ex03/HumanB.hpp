/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 03:54:01 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 05:21:03 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		const std::string&	getName();
		const std::string&	getWep();
		void				setName(std::string name);
		void				setWeapon(Weapon& wep);
		void				attack();
	private:
		std::string _name;
		Weapon*  _wep;// HumanB has a pointer instead of reference
};                    // because it can have no weapons so is set to NULL
                      // by default

#endif