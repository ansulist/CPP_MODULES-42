#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <list>

class PmergeMe
{
	private:
		std::vector<int> vec;
		std::list<int> lstt;
	public:
		// Orthodox 
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &copy);

		// ----- algorithm for sorting
		int check_nbr(char *str);
		int atoii(const char* str);
};

#endif