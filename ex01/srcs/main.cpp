#include "iter.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
void add_one(T& value)
{
    value += 1;
}

int main(void)
{

    const int size = 10;
    char test[size];

    for (int i = 0; i < size; i++)
    {
        test[i] = i + 32;
        cout << "before test[" << i << "] = " << test[i] << endl;
    }

    iter(test, size, add_one);
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "after test[" << i << "] = " << test[i] << endl;
    }


    return (0);
}