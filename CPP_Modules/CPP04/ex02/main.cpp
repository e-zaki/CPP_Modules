#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// Animal	obj;

	Cat	Ocelot;
	Ocelot.makeSound();
	Dog	Husky;

	Dog	ShibaInu;

	ShibaInu = Husky;

	ShibaInu.showBrain();

	// system("leaks Brain");
	
	return 0;
}