#include "Span.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	// scenario 1 -> adding regular nbrs and succesfully adding number
	Span sp = Span(10);
	sp.addNum(6);
	sp.addNum(3);
	sp.addNum(17);
	sp.addNum(9);
	sp.addNum(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.printvec();

	// scenario 2 -> adding more number (add range) and successfull
	std::vector<int> adding(3);
	adding[0] = 99;
	adding[1] = 7;
	adding[2] = 66;
	sp.addRange(adding.begin(), adding.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.printvec();

	// scenario 3 -> adding more number (add range) and failed bcs not enough spaces
	try
	{
		std::vector<int> adding(9);
		adding[0] = 99;
		adding[1] = 7;
		adding[2] = 66;
		adding[3] = 66;
		adding[4] = 0;
		adding[5] = 12;
		sp.addRange(adding.begin(), adding.end());
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// scenario 4 -> testing with 10k numbers
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
    unsigned int num_elements = 11000;
    Span spp(15000);

    try 
	{
        for (unsigned int i = 0; i < num_elements; ++i) 
		{
            spp.addNum(std::rand() % 100000);
        }
        std::cout << "Shortest Span: " << spp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << spp.longestSpan() << std::endl;
		spp.printvec();

    } 
	catch (const std::exception &e) 
	{
        std::cerr << "Error: " << e.what() << std::endl;
    }
	return (0);
}
