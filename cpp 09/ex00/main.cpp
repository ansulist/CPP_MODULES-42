#include "BitcoinExchange.hpp"

static int GetBitcoinDataPrice(BitcoinExchange &btc)
{
	std::string date;
	std::string value;
	std::fstream file;
	std::string line;

	file.open("data.csv", std::fstream::in);
	if (!file.is_open())
    {
		std::cerr << "Error: could not open data.csv" << std::endl;
		return 1;
	}
	std::getline(file, line); // skip the first line
	while (std::getline(file, line))
    {
		date = line.substr(0, 10);
		try
		{
			value = line.substr(line.find(',') + 1);
		}
		catch (std::out_of_range const &e)
		{
			std::cerr << "Error: no value" << std::endl;
			continue ;
		}
		btc.push(date, value);
	}
	file.close();
	return 0;
}

static int GetInputData(BitcoinExchange &btc, char *filename)
{
	float		price;
	std::string	date;
	std::string	value;
	std::fstream file;
	std::string line;
    unsigned long pipe_pos;

	file.open(filename, std::fstream::in);
	if (!file.is_open())
    {
		std::cerr << "Error: could not open " << filename << std::endl;
		return 1;
	}
	std::getline(file, line);
	while (std::getline(file, line)) 
    {
		date = line.substr(0, 10);
        pipe_pos = line.find('|');
		if (pipe_pos == std::string::npos)
		{
			std::cerr << "Error: no value" << std::endl;
			continue;
		}
        value = line.substr(line.find('|') + 1);
        value = ltrim(value);
		if (validDate(date) && validPrice(value))
        {
			price = btc.Pricing(date, atof(value.c_str()));
			std::cout << date << " =>" << value << " = " << price << std::endl;
		}
	}
	file.close();
	return 0;
}

int main( int ac, char **av )
{
	BitcoinExchange btc;
    
	if (ac != 2)
    {
		std::cerr << "Input supposed to be: ./btc {input data}" << std::endl;
		return 1;
	}
	if (GetBitcoinDataPrice(btc) || GetInputData(btc, av[1]))
		return 1;
	return 0;
}