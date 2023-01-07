#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	*animal[10];

	for (int i = 0; i < 5; i++)
	{
		animal[i] = new Cat();
		Cat *ptr = (Cat *) animal[i];
		ptr->showBrain();
	}

	for (int i = 5; i < 10; i++)
		animal[i] = new Dog();

	for (int i = 0; i < 10; i++)
		delete animal[i];


	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	// basic.showBrain();

	// Dog	Husky;

	// Dog	champolice;

	// champolice = Husky;

	// champolice.showBrain();

	// system("leaks Brain");
	
	return 0;
}