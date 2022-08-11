#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	printline();

	const Animal* a = new Animal();
	std::cout << a->getType() << " goes ";
	a->makeSound();
	delete a;

	printline();

	const Animal* c = new Cat();
	std::cout << c->getType() << " goes ";
	c->makeSound();
	delete c;

	printline();

	const Animal* d = new Dog();
	std::cout << d->getType() << " goes ";
	d->makeSound();
	delete d;

	printline();

	const WrongAnimal* wa = new WrongAnimal();
	std::cout << wa->getType() << " goes ";
	wa->makeSound();
	delete wa;

	printline();

	const WrongAnimal* wc = new WrongCat();
	std::cout << wc->getType() << " goes ";
	wc->makeSound();
	delete wc;

	return 0;
}