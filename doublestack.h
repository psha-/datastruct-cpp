#ifndef DOUBLESTACK_H
#define DOUBLESTACK_H

#include <vector>

template<typename T>
class DoubleStack
{
public:
    DoubleStack(int capacity = _defaultCapacity)
    {
        _elements.reserve(capacity);
    }

    void push1(T&& element)
    {
        if()
        _elements.push_back(element);
    }

    void push2()
    {

    }

    void pop1()
    {

    }

    void pop2()
    {

    }

    T top1()
    {

    }

    T top2()
    {

    }

private:
    std::vector<T> _elements;
    const int _defaultCapacity = 10;
    void _grow();
};

#endif // DOUBLESTACK_H
