#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}
PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		vec = copy.vec;
		lstt = copy.lstt;
	}
	return *this;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

