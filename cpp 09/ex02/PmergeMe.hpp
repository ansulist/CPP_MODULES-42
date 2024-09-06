#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <ctime>
#include <iomanip>
#include <cstddef>

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
		double sorting_all(char **av);
		void check_args_and_push(char **av);
		void printsss(std::string str);
		std::list<int> merge_lst(std::list<int> &left, std::list<int> &right);
		void sort_lst(std::list<int> &list);
};

#endif