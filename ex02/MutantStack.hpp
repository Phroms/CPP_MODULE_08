# pragma once
# include <iostream>
# include <stack>

template <typename T> 
class MutantStack : public std::stack<T>
{
	public:

		MutantStack() {};
	
		MutantStack(const MutantStack &cpy) : std::stack<T>(cpy) {}; // Copia los elementos de MutantStack en 'cpy'

		MutantStack &operator=(const MutantStack &rhs)
		{
			this->c = rhs.c; // Copiamos el contenido del contenedor interno rhs.c al contenedor que apunta 'this->c'
			return *this; // Devuelve el objeto permitiendo la copia
		};

		~MutantStack();

		// Definicion del tipo de iterator con container_type(es mas flexible)
		typedef typename std::stack<T>::container_type::iterator iterator; // Definimos del tipo de iterator normal
		typedef typename std::stack<T>::container_type::const_iterator const_iterator; // Iterator constante																		   

		// Metodos para iteratores normales(permite recorrer el contenedor desde el primer al ultimo iterator)
		iterator begin() {return this->c.begin(); } // Retorna el iterator al inico del contenedor
		iterator end() {return this->c.end(); } // Retorna el iterator al final del contenedor

		// Metodos para obtener iteratores constantes(no permite modificar los elementos)
		const_iterator begin() const {return this->c.begin(); } // Iterator constante al incio
		const_iterator end() const {return this->c.end(); } 	// Iterator constante al final
};

template <typename T>
MutantStack<T>::~MutantStack() {} // Destructor de la clase MutantStack
