#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main( void ) {

	Base *ptr = generate();

	identify(ptr);

	A objA;

	identify(objA);

	Base *ptr1 = new Base;

	identify(ptr1);

	Base objB;
	identify(objB);

	delete ptr;
	delete ptr1;

	return 0;
}
