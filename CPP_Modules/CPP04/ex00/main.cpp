#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	wmeta->makeSound();
	k->makeSound();

	WrongCat	cat;
	cat.makeSound();

	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete k;

	return 0;
}