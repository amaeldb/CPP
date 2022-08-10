#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string n) : ClapTrap(n)
{
	setModel("Scav");
	std::cout << "ScavTrap Default constructor called" << std::endl;
	setMaxHp(100);
	setHp(100);
	setEp(50);
	setAd(20);
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
	std::cout << getModel() << "Trap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	std::cout << "ScavTrap Copy assignement called" << std::endl;
	ClapTrap::operator=(s);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!getEp())
	{
		std::cout  << getModel() << "Trap " << getName() << " is out of blades..." << std::endl;
		return;
	}
	if (!getHp())
	{
		std::cout  << getModel() << "Trap " << getName() << " is down..." << std::endl;
		return;
	}
	setEp(getEp() - 1);
	std::cout << getModel() << "Trap " << getName() << " slashes " << target << ", inflicting " << getAd() << " points of damage!" << std::endl;
	std::cout << getModel() << "Trap " << getName() << " now has " << getEp() << " energy points." << std::endl;
}

void ScavTrap::guardGate()
{
	if (!getHp())
	{
		std::cout  << getModel() << "Trap " << getName() << " is dead..." << std::endl;
		return;
	}
	std::cout << getModel() << "Trap " << getName() << " has entered guard gate mode!" << std::endl;
}