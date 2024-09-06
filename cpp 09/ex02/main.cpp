#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "input needed, add some numbers" << std::endl;
    else
	{
		
		PmergeMe sorting;
		try
    	{
			sorting.sorting_all(av);
		}
    	catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		return 0;
	}
	return 1;
}