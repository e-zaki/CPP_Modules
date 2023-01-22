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
	int arr[] = {1, 14, 55, 2, 7};
	sp.addMultipleNbrs(arr, 5);
	// Span sp2 = sp;
	
	Span sp3(10100);
	int *bigArr = new int[10100];
	for (int i = 0; i < 10100; i++) {
		bigArr[i] = i;
	}
	sp3.addMultipleNbrs(bigArr, 10100);
	return 0;
}