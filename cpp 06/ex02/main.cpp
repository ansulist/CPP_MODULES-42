#include "real.hpp"
#include "a.hpp"
#include "b.hpp"
#include "c.hpp"

#include <cstdlib>
#include <cstdio>

static Base *generate(void)
{
    switch (std::rand() % 3)
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
            break;
        default:
            perror("Something is wrong, please check again");
            return (NULL);
    }
}

static void identify(Base *test)
{
    if (dynamic_cast<A*>(test))
        std::cout << "It's A" << std::endl;
    else if (dynamic_cast<B*>(test))
        std::cout << "It's B" << std::endl;
    else if (dynamic_cast<C*>(test))
        std::cout << "It's C" << std::endl;
    else
        std::cout << "It's none" << std::endl; 
}

void    identify(Base &test)
{
    try
    {
        A& a = dynamic_cast<A&>(test);
        std::cout << "this is A" << std::endl;
        (void)a;
    } catch(const std::exception& e){}
    try
    {
        B& b = dynamic_cast<B&>(test);
        std::cout << "this is B" << std::endl;
        (void)b;
    } catch(const std::exception& e){}
    try
    {
        C& c = dynamic_cast<C&>(test);
        std::cout << "this is C" << std::endl;
        (void)c;
    } catch(const std::exception& e){}
}

int     main( void )
{
    std::srand(std::time(0)); 
    
    Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();
    Base*   d = generate();

    std::cout << "/* **************************************** */" << std::endl;

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;

    std::cout << "/* ***************************************** */" << std::endl;


    delete a;
    delete b;
    delete c;
    delete d;

    return (0);
}