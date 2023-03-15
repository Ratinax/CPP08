# include "easyfind.hpp"

int	main()
{
	std::vector<int>			array;
	std::vector<int>::iterator	it;
	int							good_nbr = 99;
	int							wrong_nbr = 100;

	for (int i = 0; i < 100; i++)
		array.push_back(i);
	std::cout << YELLOW << "array : ";
	for (int i = 0; i < 100; i++)
	{
		std::cout << array[i];
		if (i < 99)
			std::cout << ", ";
	}
	std::cout << WHITEENDL;
	try
	{
		it = easyfind(array, good_nbr);
		std::cout << GREEN << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << WHITEENDL;
	}
	try
	{
		it = easyfind(array, wrong_nbr);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << WHITEENDL;
	}
	return (0);
}
