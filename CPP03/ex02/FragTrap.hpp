#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(const std::string n);
		FragTrap(const FragTrap &s);
		FragTrap &operator=(const FragTrap &s);
		~FragTrap();

		void attack(const std::string &target);
		void highFiveGuys();
};

#endif