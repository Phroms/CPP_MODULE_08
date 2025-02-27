# pragma once
# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;
	public:
		Span(unsigned int n);
		~Span();
		void addNumber(int number);
		
		// Metodo para agregar un numero al contenedor
		void addNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);

		int shortestSpan();
		int longestSpan();
};
