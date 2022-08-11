#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &w);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &w);

		void setType(const std::string &s);
		std::string getType() const;

		void makeSound() const;

	protected:
		std::string type;
};

#endif