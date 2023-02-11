#ifndef ITER_H
#define ITER_H

#include <cstdio>
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
void iter(T *array, size_t len, void(*func)(T& value))
{
    for (size_t i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

#endif
