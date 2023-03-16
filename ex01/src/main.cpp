#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << GREEN << sp.shortestSpan() << WHITEENDL;
	std::cout << GREEN << sp.longestSpan() << WHITEENDL;

	try
	{
		sp.addNumber(8);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << std::endl;
	}

	Span sp2(200);

	std::vector<int> v;
	for (int i = 1; i < 170; i++)
	{
		v.push_back(i);
	}
	try
	{
		sp2.addNumber(55);
		sp2.addNumber(66);
		sp2.addRangeNumbers(v.begin(), v.end());
		sp2.addNumber(77);
		sp2.addNumber(88);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << std::endl;
	}

	sp2.put();
	std::cout << BLUE << sp2.shortestSpan() << std::endl;
	std::cout << BLUE << sp2.longestSpan() << std::endl;

	return 0;
}
