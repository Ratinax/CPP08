#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> myStack;
	std::stack<int> notMyStack;

	std::cout << YELLOW;
	for (int i = 0; i <= 20; i++)
		myStack.push(i * i);
	myStack.pop();
	myStack.put();
}
