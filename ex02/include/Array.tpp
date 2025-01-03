#ifndef ARRAY_T
#define ARRAY_T

#include <iostream>
#include <ostream>
#include "Array.hpp"

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->array_ = new T[n] ();
    this->size_ = n;
}

template <typename T>
Array<T>::Array()
{
    this->array_ = new T[0] ();
    this->size_ = 0;
}

template <typename T>
Array<T>::~Array()
{
    delete [] (this->array_);
}

template <typename T>
Array<T>::Array(const Array<T>& ary)
{
    T* tmp;

    try {
        tmp = new T[ary.size()] ();
        for (unsigned int i = 0; i < ary.size() ; i++)
        {
            tmp[i] = ary.array_[i];
        }
        this->size_ = ary.size();
        this->array_ = tmp;
    }catch (std::exception){
        std::cerr << "Error:Array() Copy Constructor" << std::endl;
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> & ary)
{
    if (this != &ary)
    {
        T* tmp;
        try {
            tmp = new T[ary.size()];
            for (unsigned int i = 0; i < ary.size() ; i++)
            {
                tmp[i] = ary.array_[i];
            }
            this->size_ = ary.size();
            delete [] (this->array_);
            this->array_ = tmp;
        }catch (std::exception){
            std::cerr << "Error:Array() Copy Asignment" << std::endl;
        }
    }
    return (*this);
}

template <typename T>
T Array<T>::operator[](size_t n) const
{
    if (n >= this->size_)
        throw std::exception();
    return (this->array_[n]);
}

template <typename T>
T& Array<T>::operator[](size_t n)
{
    if (n >= this->size_)
        throw std::exception();
    return (this->array_[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->size_);
}

#endif
