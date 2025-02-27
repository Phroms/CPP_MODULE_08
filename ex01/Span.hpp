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
		template <typename T>
		void addNumbers(typename T::iterator begin, typename T::iterator end)
		{
			if(std::distance(begin, end) + _numbers.size() > _maxSize) // std::distance calcula la distancia entre dos iteradores y verifica si al sumar los elementos supera _maxSize
				throw std::length_error("Error: These numbers cannot be added, it exceeds the maximum size");
			_numbers.insert(_numbers.end(), begin, end); // inserta los elementos en el contenedor _numbers
		}
		int shortestSpan();
		int longestSpan();
};

// No se puede usar template, en vez de template deberia ser vector y meter eso en el cpp
