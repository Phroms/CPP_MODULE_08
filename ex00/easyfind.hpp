# pragma once
# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle) // se usa T::iterator que es un iterador que se usa para recorrer los contenedores
{
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle); // se usa typename para indicar que T::iterator es un tipo de dato

	if (it == haystack.end()) // significa que el numero no fue encontrado
		throw std::out_of_range("Error: Element not found in the container"); // std::out_of_range es un error que indica que el numero no es encontrado dentro del contenedor
	return it; // Hacemos que el metodo sea de tipo typename para poder retornar el iterador
}
