#include "MutantStack.hpp"

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

	std::cout << "\ncontent of stack mstack:" << std::endl;
	while (!mstack.empty()) {
		std::cout << mstack.top() << std::endl;
		mstack.pop();
	}
	std::cout << std::endl;
	
	std::cout << "content of stack s:" << std::endl;
	while (!s.empty()) {
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << std::endl;

	// replace MutantStack with std::list

	std::cout << "Working with std::list instead of Mutant Stack..\n";
	std::list<int> mylist;

	mylist.push_back(5);
	mylist.push_back(17);
	
	std::cout << mylist.back() << std::endl;
	
	mylist.pop_back();
	
	std::cout << mylist.size() << std::endl;
	
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	//[...]
	mylist.push_back(0);
	
	std::list<int>::iterator it1 = mylist.begin();
	std::list<int>::iterator ite1 = mylist.end();

	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	return 0;
}
