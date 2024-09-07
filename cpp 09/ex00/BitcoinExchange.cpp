#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "constructor has been called" << std::endl << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << std::endl << "desdructor has been called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) 
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this != &copy)
		this->_data = copy._data;
	return *this;
}

void BitcoinExchange::push( std::string const date, std::string const price)
{
	this->_data.insert(std::pair< std::string, float >(date, atof(price.c_str())));
}

void BitcoinExchange::pop(std::string const date) 
{
	if (validDate(date) == false)
		return;
	this->_data.erase(date);
}

bool validDate(std::string const date) 
{
	if (date.length() != 10)
    {
		std::cerr << "Invalid date format" << std::endl;
		return false;
	}

	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());

	if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
    {
		std::cerr << "Error: Data Is Invalid" << std::endl;
		return (false);
	}
	else if ((month == 2 && day > 28) && (year != 2012 && year != 2016 && year != 2020))
	{
		std::cerr <<  "Error: invalid date value" <<std::endl;
		return (false);
	}
	else if ((month == 2 && day > 29) && (year == 2012 || year == 2016 || year == 2020))
	{
		std::cerr << "Error: invalid date value" << std::endl ;
		return (false);
	}
	return true;
}

float BitcoinExchange::Pricing(std::string date, float amount)
{
	std::map<std::string, float>::iterator pair = this->_data.lower_bound(date);

	if (pair == this->_data.end())
    {
		std::cerr << "Error: Out of range" << std::endl;
		return 0;
	}
	return (amount * pair->second);
}

bool checkValueValidity(std::string const price)
{
    bool hasPeriod = false;

    if (price.empty())
        return false;

    for (std::string::const_iterator it = price.begin(); it != price.end(); ++it)
    {
        if (*it == '.') 
        {
            if (hasPeriod) 
                return false;
            hasPeriod = true;
        } 
        else if (!std::isdigit(static_cast<unsigned char>(*it))) 
            return false;
    }
    if (price[price.size() - 1] == '.')
        return false; 
    return (true);
}

bool validPrice(std::string const price)
{
	float num = 0;

    if (checkValueValidity(price) == false)
    {
        std::cerr << "Error: Value is not valid" << std::endl;
		return false;
    }
	try
	{
		num = std::strtof(price.c_str(), NULL);
	}
	catch (std::out_of_range const &e)
	{
		std::cerr << "Error: Out of range" << std::endl;
		return false;
	}
	
	if (num < 0)
    {
		std::cerr << "Error: Negative value" << std::endl;
		return false;
	}
	if (num > 1000)
    {
		std::cerr << "Error: Value too large" << std::endl;
		return false;
	}

	return true;
}

std::string &ltrim(std::string &s) 
{
    // Find the first non-whitespace character
    std::string::iterator it = s.begin();
    while (it != s.end() && std::isspace(static_cast<unsigned char>(*it))) {
        ++it; // Move to the next character
    }
    
    // Erase all characters before the first non-whitespace character
    s.erase(s.begin(), it);
    return s;
}