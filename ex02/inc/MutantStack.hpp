#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

# define WHITEENDL   std::endl << WHITE
# define BLACK			"\033[0m\033[30m"
# define RED			"\033[0m\033[31m"
# define GREEN			"\033[0m\033[32m"
# define YELLOW			"\033[0m\033[33m"
# define BLUE			"\033[0m\033[34m"
# define MAGENTA		"\033[0m\033[35m"
# define CYAN			"\033[0m\033[36m"
# define WHITE			"\033[0m\033[37m"
# define BOLDBLACK		"\033[1m\033[30m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

template<typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack(void): std::stack<T>() {};
		MutantStack(MutantStack const & toCopy) : std::stack<T>()
		{
			*this = toCopy;
		}
		~MutantStack( void ) {};
		MutantStack& operator=(MutantStack const & m)
		{
			if (this != &m)
				this->c = m.c;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iter;
		iter	begin()
		{
			return (this->c.begin());
		}

		iter	end()
		{
			return (this->c.end());
		}

		void	put()
		{
			iter	iterEnd = end();

			while (iterEnd != begin())
			{
				iterEnd--;
				std:: cout << *iterEnd << std::endl;
			}
		}
		void	pop()
		{
			if (this->c.empty() == 0)
				this->c.pop_back();
		}
};

#endif
