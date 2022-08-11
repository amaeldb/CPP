#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &a);
		~Cat();

		Cat &operator=(const Cat &a);
		Animal &operator=(const Animal &a);

		virtual Brain *getB() const;

		virtual void makeSound() const;

	protected:
		std::string type;

	private:
		Brain *b;
};

#endif