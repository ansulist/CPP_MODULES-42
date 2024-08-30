#ifndef EASYFIND_H
#define EASYFIND_H

#include<iterator>
#include <stdexcept>
#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &hi, int val)
{
	typename T::iterator thing = std::find(hi.begin(), hi.end(), val);
	if (thing == hi.end())
		throw std::exception();
	return thing;
}

#endif