#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*CreateA() {

	Base	*ptr = new A;

	return ptr;
}

Base	*CreateB() {

	Base	*ptr = new B;

	return ptr;
}

Base	*CreateC() {

	Base	*ptr = new C;

	return ptr;
}

Base	*generate( void ) {

	Base	*ptr = 0;

    std::srand(std::time(NULL));

    int randNum = std::rand() % 3;

	if (randNum == 0) {
		ptr = CreateA();
	}
	else if (randNum == 1) {
		ptr = CreateB();
	}
	else if (randNum == 2) {
		ptr = CreateC();
	}

	return ptr;
}

void	identify( Base* p ) {
	
	A* pa = dynamic_cast<A*> (p);

	if (pa != NULL) {
		std::cout << "A" << std::endl;
		return ;
	}

	B* pb = dynamic_cast<B*> (p);

	if (pb != NULL) {
		std::cout << "B" << std::endl;
		return ;
	}

	C* pc = dynamic_cast<C*> (p);

	if (pc != NULL) {
		std::cout << "C" << std::endl;
		return ;
	}
	else {
		std::cerr << "ptr points to non Derived obj of Base type" << std::endl;
	}
}

void identify( Base& p ) {

    try {

		A& pa = dynamic_cast<A&>(p);
        (void) pa;
	
		std::cout << "A" << std::endl;

		return ;


    } catch(std::bad_cast& e) {}
	try {

		B& pb = dynamic_cast<B&>(p);
        (void) pb;

		std::cout << "B" << std::endl;

		return ;
	
	} catch(std::bad_cast& e) {}
	try {

		C& pc = dynamic_cast<C&>(p);
        (void) pc;

		std::cout << "C" << std::endl;

		return ;

	} catch(std::bad_cast& e) {
		std::cout << e.what() << std::endl;
	}

}
