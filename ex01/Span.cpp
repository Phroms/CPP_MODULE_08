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
	{
		throw std::length_error("\033[91mError\033[0m: No more numbers can be added, the Span is full");
	}
	_numbers.push_back(number);
}

void Span::addNumbers(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
{
	if (std::distance(begin, end) + _numbers.size() > _maxSize) // std::distance calcula la distancia entre dos iteradores y verifica si al sumar los elementos supera _maxSize
	{
		throw std::length_error("\033[91mError\033[0m: No more numbers can be added, the Span is full");
	}
	_numbers.insert(_numbers.end(), begin, end); // inserta los elementos en el contenedor _numbers
}

// Metodo para calcular el menor span
int Span::shortestSpan()
{
	if (_numbers.size() < 2)
	{
		throw std::logic_error("\033[91mError\033[0m: There are not enought numbers to calculate the Span"); // logic_error = Error en la logica del programa
	}
	
	std::vector<int> sorted = _numbers; // Se crea una copia llamada sorted, para no modificar el original
	std::sort(sorted.begin(), sorted.end()); // std::sort hara que los numeros se ordenen
	
	int minSpan = sorted[1] - sorted[0]; // Calcula la primera diferencia entre los numeros ordenador (sorted = 3, 8, 17, 20) = minSpan = 8 - 3 = 5;
	
	for (size_t i = 1; i < sorted.size() - 1; i++) // El -1 evita que accedamos fuera del rango
	{
		int diff = sorted[i + 1] - sorted[i]; // Diferencia entre numeros consecutivos
		if (diff < minSpan) // Si encontramos una diferencia menor, la actualizamos
			minSpan = diff;
	}
	return minSpan;
}

// Metodo para calcular el mayor Span
int Span::longestSpan()
{
	if (_numbers.size() < 2)
	{
		throw std::logic_error("\033[91mError\033[0m: The are not enought numbers to calculate the Span");
	}

	int minVal = *std::min_element(_numbers.begin(), _numbers.end()); // min_element se usa para encontrar el menor elemento
	int maxVal = *std::max_element(_numbers.begin(), _numbers.end()); // max_element se usa para encontrar el mayor elemento
	// se usa '*' para tener el valor del iterator


	return maxVal - minVal; // Se hace la resta para obtener la mayor diferencia
}
