#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();

		Animal &operator=(const Animal &a);

		virtual void makeSound() const;
		std::string getType() const;
		void setType(const std::string &t);

	protected:
		std::string type;
};

#endif