#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &a);
		~Dog();

		Dog &operator=(const Dog &a);

		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif