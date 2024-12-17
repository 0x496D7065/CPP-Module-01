/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:13:27 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/04 14:01:45 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char **argv)
{
	std::string	s1;
	std::string	s2;
	std::string	filename;

	if (argc != 4)
	{
		std :: cout << "Invalid argument" << std :: endl;
		return (1);
	}
	filename = argv[1];s1 = argv[2];s2 = argv[3];
	std::ifstream infile(filename.c_str());
	if (infile.is_open())
	{
		if (replace(infile, filename, s1, s2) != 0)
		{
			std :: cout << "Error when creating " << filename << ".replace" << std :: endl;
			infile.close();
			return (1);
		}
	}
	else
	{
		std :: cout << "Can't open file: "<< filename << std :: endl;
		return (1);
	}
	infile.close();
}