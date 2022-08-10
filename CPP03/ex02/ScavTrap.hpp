#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(const std::string n);
		ScavTrap(const ScavTrap &s);
		ScavTrap &operator=(const ScavTrap &s);
		~ScavTrap();

		void attack(const std::string &target);
		void guardGate();
};

#endif