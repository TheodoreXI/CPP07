#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>


template <typename T>
void iter(T *a, const size_t l, void (*f)(const T&))//must be changed to u
{
	for (size_t i = 0; i < l; i++)
	{
		f(a[i]);
	}
}
template <typename T>
void	f(const T &b)
{
	std::cout << b << "\n";
}


#endif