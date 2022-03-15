#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> p;
    p.push(99);
    p.push(77);
    p.push(776544);

    Stack<int> d;
    d = p;
    std::cout << d.top() << std::endl;
    std::cout << d.size() << std::endl;

    while (!p.empty())
    {
        std::cout << p.top() << " ";
        p.pop();
    }
}