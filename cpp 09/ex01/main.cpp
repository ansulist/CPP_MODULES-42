#include "RPN.hpp"

int main( int ac, char **av ) {
	if (ac != 2) 
	{
		std::cerr << "can you please input something? like: ./RPN [input]" << std::endl;
		return 1;
	}

	try 
	{
		RPN calc;
		calc.calculate(av[1]);
		std::cout << calc.result() << std::endl;
	}
	catch (std::exception const &e)
    {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}