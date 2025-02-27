# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\033[93m------ My Tests ------\033[0m" << std::endl;

	MutantStack<int> testStack;

	std::cout << "\033[93mTamano de testStack: \033[0m" << testStack.size() << std::endl;

	testStack.push(10);
	testStack.push(20);
	testStack.push(30);

	std::cout << "\033[93mTamano despues de push: \033[0m" << testStack.size() << std::endl;

	std::cout << "\033[93mValor en la cima: \033[0m" << testStack.top() << std::endl;

	testStack.pop();

	std::cout << "\033[93mTamano despues del pop: \033[0m" << testStack.size() << std::endl;

	std::cout << "\033[93mNuevo valor en la cima: \033[0m" << testStack.top() << std::endl;

	MutantStack<int>::iterator itTest = testStack.begin();
	MutantStack<int>::iterator iteTest = testStack.end();

	std::cout << "\033[92mElementos del TestStack: \033[0m" << std::endl;

	while (itTest != iteTest)
	{
		std::cout << *itTest << std::endl;
		++itTest;
	}
	return 0;
}
