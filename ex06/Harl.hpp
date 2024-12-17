/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 10:33:04 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/08 16:20:15 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void    complain( std::string level );
    void    uselessComplain( void );
    int     logLevel( std::string level );
    
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
};

#endif