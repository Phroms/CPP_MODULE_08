# include "Span.hpp"

int main()
{
	try // try para capturar excepciones
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		// Prueba con iteradores
		std::vector<int> moreNumbers;
		for (int i = 0; i < 10000; i++)
		{
			moreNumbers.push_back(i * 2);
		}

		Span largeSpan(10000);
		largeSpan.addNumbers(moreNumbers.begin(), moreNumbers.end());

		std::cout << "Large Span - Shortest: " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Large Span - Longest: " << largeSpan.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
