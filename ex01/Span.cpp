# include "Span.hpp"

Span::Span(unsigned int max_Size)
		: _maxSize(max_Size)
{
}

Span::~Span(){}

// Metodo para agregar numeros en el contenedor
void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw std::length_error("Error: No more numbers can be added, the Span is full");
	_numbers.push_back(number);
}

// Metodo para agregar un numero al contenedor
template <typename T>
void Span::addNumbers(typename T::iterator begin, typename T::iterator end)
{
	if(std::distance(begin, end) + _numbers.size() > _maxSize)
		throw std::length_error("Error: These numbers cannot be added, it exceeds the maximum size");
	_numbers.insert(_numbers.end(), begin, end);
}

/* Notas */

/* 
🔹 std::distance(begin, end) cuenta los elementos en el rango [begin, end).
🔹 Se usa para verificar si agregar esos elementos supera _maxSize.
🔹 _numbers.insert(_numbers.end(), begin, end); inserta los elementos en _numbers.

📌 Mejoras sugeridas:

    En lugar de std::overflow_error, usa std::length_error, que es más apropiado para errores de tamaño de contenedor.

*/
