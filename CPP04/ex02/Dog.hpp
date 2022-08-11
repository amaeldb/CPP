#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &a);
		~Dog();

		Dog &operator=(const Dog &a);
		Animal &operator=(const Animal &a);

		virtual Brain *getB() const;

		virtual void makeSound() const;

	protected:
		std::string type;

	private:
		Brain *b;
};

#endif