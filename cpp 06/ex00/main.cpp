#include "conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Please check your argument!" << std::endl;
        return EXIT_FAILURE;
    }
    Conversion a;
    try
    {
        a.setSTR(av[1]);
        a.convert();
        std::cout << a;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}