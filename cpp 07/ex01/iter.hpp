#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <cstddef>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif