#include "Array.hpp"
#include "iostream"

template <typename T>
void printA(Array<T> &a) 
{
	for (unsigned int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
	std::cout << "list end" << std::endl;
}

int main ( void ) {
	Array<int> a(4);
	Array<int> b(3);
	Array<int> c;
	c = 3;
	Array<int> *test = new Array<int>(5);

	printA(a);
	std::cout << std::endl << "-------------------" << std::endl;
	b[2] = 10;
	printA(b);
	std::cout << std::endl << "-------------------" << std::endl;
	printA(c);
	std::cout << std::endl << "-------------------" << std::endl;


	try
	{
		b[7] = 3;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	printA(b);
	std::cout << std::endl << "-------------------" << std::endl;
	printA(*test);
	std::cout << std::endl << "-------------------" << std::endl;
	(*test)[2] = 20;
	printA(*test);

	std::cout << std::endl << "------------------- sizes" << std::endl;
	std::cout << "arr size: "<< test->size() << std::endl;
	std::cout << "arr size: "<< a.size() << std::endl;
	std::cout << "arr size: "<< b.size() << std::endl;
	std::cout << "arr size: "<< c.size() << std::endl;
	return (0);

}