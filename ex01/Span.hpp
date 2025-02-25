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
		template <typename T>
		void addNumbers(typename T::iterator begin, typename T::iterator end);
};


