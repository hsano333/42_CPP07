#include "iter.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

template <typename T>
void add_two(T& value)
{
    value += 2;
}

template <typename T>
void print(const T& value)
{
    cout << value << endl;
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
    cout << "test:iterator add_two()" << endl;
    iter(test, size, add_two);
    cout << "test:iterator print()" << endl;
    iter(test, size, print);
    return (0);
}
