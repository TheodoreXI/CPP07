#include "iter.hpp"

void inc(int &a)
{
	a++;
}

void	print(const std::string &s)
{
	std::cout << s << "\n";
}

void	ft_round(float &k)
{
	k = round(k);
}

int main()
{
	int arr[] = {1,2,3,4,5};
	iter(arr, 5, inc);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	std::string s[] = {"hello", "lol"};
	iter(s, 2, print);
	float nums[] = {1.2, 4.7, 3.4, 5.6, 2.3};
	iter(nums, 5, ft_round);
	for (int i = 0; i < 5; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";
}
