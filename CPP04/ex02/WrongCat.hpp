#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &a);
		~WrongCat();

		WrongCat &operator=(const WrongCat &a);

		void makeSound() const;

	protected:
		std::string type;
};

#endif