#include "Array.hpp"
#include "iostream"
	template <typename T>
void printA(Array<T> &a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
	std::cout << "list end" << std::endl;
}

int main ( void ) {
	Array<int> a(4);
	Array<int> b(3);
	Array<int> c;
	Array<int> *test = new Array<int>(5);
	printA(a);
	b[2] = 10;
	printA(b);
	try{
		b[7] = 3;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	printA(b);
	printA(*test);
	(*test)[2] = 20;
	printA(*test);
	std::cout << "arr size: "<< test->size() << std::endl;
	return (0);

}