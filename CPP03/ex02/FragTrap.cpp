#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string n) : ClapTrap(n)
{
	setModel("Frag");
	std::cout << "FragTrap Default constructor called" << std::endl;
	setMaxHp(100);
	setHp(100);
	setEp(100);
	setAd(30);
}

FragTrap::FragTrap(const FragTrap &s) : ClapTrap(s)
{
	std::cout << getModel() << "Trap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
	std::cout << "FragTrap Copy assignement called" << std::endl;
	ClapTrap::operator=(s);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (!getEp())
	{
		std::cout << getModel() << "Trap " << getName() << " has no bullets left..." << std::endl;
		return;
	}
	if (!getHp())
	{
		std::cout << getModel() << "Trap " << getName() << " is unresponsive..." << std::endl;
		return;
	}
	setEp(getEp() - 1);
	std::cout << getModel() << "Trap " << getName() << " shoots " << target << ", inflicting " << getAd() << " points of damage!" << std::endl;
	std::cout << getModel() << "Trap " << getName() << " now has " << getEp() << " energy points." << std::endl;
}

void FragTrap::highFiveGuys()
{
	if (!getHp())
	{
		std::cout << getModel() << "Trap " << getName() << " musters to last of his strength to ask for a high five..." << std::endl;
		return;
	}
	std::cout << getModel() << "Trap " << getName() << ": \"Hey guys, let's get some high fives going up in this ditch!\"" << std::endl;
}