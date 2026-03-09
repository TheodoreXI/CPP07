#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *arr;
        size_t l;
    public:
        Array(void)
            :arr(NULL), l(0)
        {
        }
        Array(unsigned int n)
        {
            l = n;
            arr = new T[n];
        }
        Array(const Array &obj)
            :arr(NULL)
        {
            *this = obj;
        }
        Array &operator=(const Array &obj)
        {
            if (this != &obj)
            {
                l = obj.l;
                if (arr)
                    delete[] arr;
                arr = new T[obj.l];
                for (size_t i = 0; i < l; i++)
                {
                    arr[i] = obj.arr[i];
                }
            }
            return (*this);
        }
        size_t size(void)
        {
            return (l);
        }
        T &operator[](int i)
        {
            if (i < 0 || static_cast<size_t>(i) >= size())
                throw(std::out_of_range("Index out of range."));
            return (arr[i]);
        }
};




#endif