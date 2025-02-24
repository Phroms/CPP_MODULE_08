# include "easyfind.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::vector<int> vec(arr, arr + 5);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 2);
		std::cout << "Element found: " << *it << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 20);
		std::cout << "Element found: " << *it << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
