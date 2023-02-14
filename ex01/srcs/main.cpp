#include "iter.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
void add_one(T& value)
{
    value += 2;
}

int main(void)
{
    int size = 10;
    int test[size];

    for (int i = 0; i < size; i++)
    {
        test[i] = i + 42;
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
