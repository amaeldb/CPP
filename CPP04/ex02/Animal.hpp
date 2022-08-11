#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();

		virtual Animal &operator=(const Animal &a);

		std::string getType() const;
		void setType(const std::string &t);
		virtual Brain *getB() const = 0;

		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif