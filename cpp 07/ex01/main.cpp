#include "iter.hpp"

void	print(int &i)
{
	std::cout << "appple: " << i << std::endl;
}

void	prints(std::string &s)
{
	std::cout << "string: "<< s << std::endl;
}

int main()
{
	int i[] = {9, 8, 2 , 3, 7};
	iter(i, 5, print);
	std::string hi[] = {"hello", "world", "chicken", "zoro"};
	iter(hi, 4, prints);
	
}