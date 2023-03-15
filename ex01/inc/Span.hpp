#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <cmath>
# include <iterator>
# include <vector>
# include <algorithm>
# include <iostream>

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

class	Span {

	private :
		std::vector<int>	_array;
		unsigned int		_size;
		unsigned int		_amountElem;
	public :
		Span(void);
		Span(unsigned int size);
		Span(const Span &s);
		Span &operator=(const Span &s);
		~Span(void);
		void	addNumber(int nb);
		void	addRangeNumber(std::vector<int> range);
		int		shortestSpan();
		int		longestSpan();
		void	put();

	class SpanFullException : public std::exception
	{
		public :
			const char	*what(void) const throw()
			{
				return ("Exception: Not enough space in Span");
			};
	};

	class NotEnoughNumberException : public std::exception
	{
		public :
			const char	*what(void) const throw()
			{
				return ("Exception: not enough numbers to see a difference");
			};
	};

};

#endif