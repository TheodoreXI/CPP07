#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>
#include <cmath>


template <typename T, typename U>
void iter(T *a, const size_t l, U f)
{
	for (size_t i = 0; i < l; i++)
	{
		f(a[i]);
	}
}


#endif