#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &a);
		~Cat();

		Cat &operator=(const Cat &a);

		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif