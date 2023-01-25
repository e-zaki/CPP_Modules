#include "Span.hpp"

int main()
{
	Span sp = Span(16);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span sp2(5);

	int arr1[] = {1, 14, 55, 2, 7, 8, 37};
	int arr2[] = {1, 14, 55, 2, 7};
	
	try {
		sp2.addMultipleNbrs(arr1, 7);
		std::cout << "Elements added to span\n";
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		sp2.addMultipleNbrs(arr2, 5);
		std::cout << "Elements added to span\n";
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	Span sp3(10100);
	int *bigArr = new int[10100];
	for (int i = 0; i < 10100; i++) {
		bigArr[i] = i;
	}
	sp3.addMultipleNbrs(bigArr, 10100);
	std::cout << "shortest Span: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest Span: " << sp3.longestSpan() << std::endl;

	delete[] bigArr;
	return 0;
}