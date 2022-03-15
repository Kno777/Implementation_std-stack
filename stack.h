#ifndef __STACK__H__
#define __STACK__H__


#include <vector>

template <typename T>
class Stack
{
public:
    Stack();
    Stack(const Stack<T>&);
    Stack& operator=(const Stack<T>&);
    Stack(Stack<T>&&);
    ~Stack();
public:
    void push(T);
    void pop();
    T& top();
    bool empty() const;
    unsigned size();
private:
    std::vector<T> m_array;
};

#include "stack.hpp"

#endif // __STACK__H__