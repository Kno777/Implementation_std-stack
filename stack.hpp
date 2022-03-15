#include <iostream>
#include "stack.h"

template <typename T>
Stack<T>::Stack()
{
    
}

template <typename T>
Stack<T>::~Stack()
{
    
}

template <typename T>
Stack<T>::Stack(const Stack<T>& oth)
{
    m_array = oth.m_array;
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& oth)
{
    if(this == &oth)
    {
        return *this;
    }
    m_array = std::move(oth.m_array);
    return *this;
}

template <typename T>
Stack<T>::Stack(Stack<T>&& oth)
{
    m_array = std::move(oth.m_array);
}

template <typename T>
void Stack<T>::push(T elem)
{
    m_array.push_back(elem);
}

template <typename T>
void Stack<T>::pop()
{
    m_array.pop_back();
}

template <typename T>
T& Stack<T>::top()
{
    return m_array[m_array.size() - 1];
}

template <typename T>
bool Stack<T>::empty() const 
{
    return !m_array.size();
}

template <typename T>
unsigned Stack<T>::size()
{
    return m_array.size();
}