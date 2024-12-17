/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 03:54:01 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/02 05:25:36 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& wep);
		~HumanA();
		const std::string&	getName();
		const std::string&	getWep();
		void				setName(std::string name);
		void				setWeapon(Weapon wep);
		void				attack();
	private:
		std::string _name;
		Weapon&  _wep;// Set as a reference because HumanA is always armed
};					  // Makes it easier to access through methods without
					  // the need of passing it by reference in setWeapon()

#endif