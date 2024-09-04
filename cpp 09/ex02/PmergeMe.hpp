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
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &copy);
};

#endif