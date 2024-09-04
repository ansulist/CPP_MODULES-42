#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<char> anita_stack;

    // Add characters from 'a' to 'z' to the stack
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        anita_stack.push(ch);
    }
    MutantStack<char>::iterator ite = anita_stack.begin();
    MutantStack<char>::iterator itee = anita_stack.end();
    ++ite;
    --ite;
    while (ite != itee)
    {
        std::cout << *ite << std::endl;
        ++ite;
    }
    std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    std::cout << anita_stack.size() << std::endl;
    std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    // Print the stack (note: printing is done in reverse order for stack)
    while (!anita_stack.empty())
    {
        std::cout << anita_stack.top() << std::endl;
        anita_stack.pop();
    }


    // std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    // std::cout << "main from the subject ex02" << std::endl;
    // MutantStack<int> mstack;
    // mstack.push(5);
    // mstack.push(17);
    // std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    // std::cout << mstack.size() << std::endl;
    // std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();
    // ++it;
    // --it;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
	// std::cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;
    return 0;
}