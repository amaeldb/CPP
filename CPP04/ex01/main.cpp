#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

int	main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;	//should not create a leak 
	delete i;

	printline();

	int count = 6;
	Animal *a[count];

	for (int i = 0; i < count; i++)
	{
		if (i % 2)
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}

	printline();

	a[0]->getB()->ideas[0] = "Drink Milk";

	*a[2] = *a[0];

	std::cout << a[0]->getB()->ideas[0] << std::endl;
	std::cout << a[2]->getB()->ideas[0] << std::endl;

	a[0]->getB()->ideas[0] = "Nevermind";

	std::cout << a[0]->getB()->ideas[0] << std::endl;
	std::cout << a[2]->getB()->ideas[0] << std::endl;

	printline();

	for (int i = 0; i < count; i++)
		delete a[i];
}
