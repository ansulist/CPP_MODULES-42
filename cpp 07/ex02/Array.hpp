#ifndef ARRAY_H
# define ARRAY_H

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array
{
	private:
			T *arr;
			unsigned int sizee;
	public:
			Array();
			Array(const Array &s);
			Array(unsigned int n);
			Array &operator=(const Array &s);
			~Array();	
			unsigned int size(void) const;
			T &operator[](unsigned int n);
};
template <typename T>
Array<T>::Array():sizee(0)
{
	arr = new T[0]();
}

template <typename T>
Array<T>::Array(unsigned int n): sizee(n)
{
	arr = new T(n);
}

template<typename T>
Array<T>::Array(const Array &s): sizee(s.sizee)
{
	arr = NULL;
	*this = s;
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &s)
{
	if (arr != NULL)
		delete [] arr;
	sizee = s.sizee;
	arr = new T[sizee]();
	for (unsigned int i = 0; i < s.sizee; i++)
		arr[i] = s.arr[i];
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	if (arr)
		delete [] arr;
}

template<typename T>
T& Array<T>::operator[](unsigned int index){
	if (index >= sizee || arr == NULL)
		throw std::out_of_range("index: out of range");
	return arr[index];
}

template<typename T>
unsigned int Array<T>::size(void) const{
	return (sizee);
}

#endif