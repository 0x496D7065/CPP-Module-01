/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:26:25 by lpetit            #+#    #+#             */
/*   Updated: 2024/11/30 23:56:49 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	public:
		Zombie();
		~Zombie();
		void		announce(void);
		void		set_name( std::string name_to_set );
		std::string	get_name();
    private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif