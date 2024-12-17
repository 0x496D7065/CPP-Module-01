/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpetit <lpetit@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:23:05 by lpetit            #+#    #+#             */
/*   Updated: 2024/12/08 10:30:22 by lpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::size_t search(const std::string &toSearch, const std::string& toFind, std::size_t pos, size_t  n)
{
    std::size_t len = toSearch.size();
    std::size_t toFindLen = toFind.size();
    std::size_t i = pos;

    if (pos > len || toFindLen > len || pos + n > len)
        return (std::string::npos);
    if (toSearch.compare(i, toFindLen, toFind) == 0)
        return (i);
    return std::string::npos;
}

int replace(std::ifstream& file, std::string& outfileName, std::string& s1, std::string& s2)
{
    std::string line;
    outfileName.append(".replace");
    std::ofstream outfile(outfileName.c_str(), std::ios::app);
    if (!outfile.is_open())
        return (1);
    bool first_line = true;
    while (std::getline(file, line))
    {
        std::size_t pos = 0;
        if (!first_line)
            outfile << "\n";
        for (std::string::iterator it = line.begin(); it != line.end(); ++it)
        {
            if (*it == *s1.begin())
            {
                pos = search(line, s1, std::distance(line.begin(), it), s1.size());// Basically a .find() but without while loop
                if (pos != std::string::npos)                                      // So it does not give positive for the whole line
                {
                    outfile << s2;
                    it += s1.size() - 1;
                }
                else
                    outfile << *it;
            }
            else
                outfile << *it;
        }
        first_line = false;
    }
    if (file.eof() && line.empty())                                                 // Checks if last line of the file was an empty to put it back in.
        outfile << "\n";                                                            // Because the main while loop output a newline
    outfile.close();                                                                // BEFORE writing the line only if it's not the first one
    return (0);
}
