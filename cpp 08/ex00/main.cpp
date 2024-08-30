#include "easyfind.hpp"
#include <vector>

int main()
{
		std::vector<int> apple;
		apple.push_back(10);
		apple.push_back (23);
		apple.push_back(90);
		apple.push_back(1);
		apple.push_back(9);

		std::cout <<"size-> "<< apple.size() << std::endl;
		int	find = 1;
		std::vector<int>::iterator hi = easyfind(apple, find);
		std::cout << *hi << std::endl;
		
		try
		{
			std::vector<int>::iterator hi = easyfind(apple, 99);
			std::cout << *hi << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << "That value doesnt exist in this container :(" << std::endl;
		}
}