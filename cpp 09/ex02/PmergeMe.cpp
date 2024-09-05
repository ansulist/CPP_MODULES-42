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

int PmergeMe::check_nbr(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

int PmergeMe::atoii(const char* str)
{
    int result = 0;
    int sign = 1;
    const char* ptr = str;

    while (*ptr == ' ' || *ptr == '\t')
        ++ptr;
    if (*ptr == '-') {
        sign = -1;
        ++ptr;
    }
    else if (*ptr == '+') {
        ++ptr;
    }
    while (*ptr >= '0' && *ptr <= '9')
	{
        result = result * 10 + (*ptr - '0');
        ++ptr;
    }
    return result * sign;
}

