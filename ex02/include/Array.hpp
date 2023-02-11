#ifndef ARRAY_H
#define ARRAY_H

#include <cstdio>
#include <exception>

template <typename T>
class Array
{
    private:
        T* array_;
        unsigned int size_;
    public:
        Array(unsigned int n);
        Array();
        ~Array();
        Array(const Array& array);
        Array& operator=(const Array& array);
        T operator[](size_t n) const;
        T& operator[](size_t n);
        unsigned int size() const;

};

#include "Array.tpp"
#endif
