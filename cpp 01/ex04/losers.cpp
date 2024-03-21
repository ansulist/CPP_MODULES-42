/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansulist <ansulist@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:54:32 by ansulist          #+#    #+#             */
/*   Updated: 2023/12/10 12:33:22 by ansulist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

void usage()
{
    std::cout << "usage: losers <filename> <s1> <s2>" << std::endl;
}

std::string customStringReplace(std::string line, std::string s1, std::string s2)
{
    int i = 0;
    int pos;
    std::string newLine = "";

    while ((pos = line.find(s1, i)) != -1)
    {
        newLine += line.substr(i, pos - i);
        newLine += s2;
        i = pos + s1.length();
    }

    newLine += line.substr(i);
    return (newLine);
}

int replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream inFile(filename);

    if (!inFile.is_open())
    {
        std::cerr << "\033[1;31mError opening " << filename << " file\033[0m" << std::endl;
        return (1);
    }
    // making a new file with the custom name plus the extension
    std::ofstream outFile(filename + ".replace");

    if (!outFile.is_open())
    {
        std::cerr << "\033[1;31mError opening " << filename << ".replace file\033[0m" << std::endl;
        return (1);
    }

    std::string line;
    // reading the infile and replace the matched one with the s2
    while (getline(inFile, line))
    {
        std::cout << "BEFORE: " << line << std::endl;

        // Replace all occurence of s1 by s2
        if (!s1.empty())
            line = customStringReplace(line, s1, s2);

        std::cout << "AFTER: " << line << std::endl;
        std::cout << std::endl;
        // writing inside the file with the replaced one
        outFile << line << std::endl;
    }

    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "\033[1;31mWrong number of arguments\033[0m" << std::endl;
        usage();
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (filename.empty())
    {
        std::cerr << "\033[1;31mFilename cannot be empty\033[0m" << std::endl;
        return (1);
    }

    return replace(filename, s1, s2);
}
