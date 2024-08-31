#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

class BitcoinExchange 
{
	private:
		std::map<std::string, float> _data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &copy);

        void push(std::string const date, std::string const price);
        void pop(std::string const date);
        float Pricing(std::string date, float amount);

};

bool validDate(std::string const date);
bool validPrice(std::string const price);
std::string &ltrim(std::string &s);

#endif