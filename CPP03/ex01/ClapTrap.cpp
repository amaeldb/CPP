#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
 : name(n), model("Clap"), maxHp(10), hp(10), ep(10), ad(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
 : name(c.name), model(c.model), maxHp(c.maxHp),hp(c.hp), ep(c.ep), ad(c.ad)
 {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
 }

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	std::cout << "ClapTrap Copy assignement called" << std::endl;
	name = c.name;
	maxHp = c.maxHp;
	hp = c.hp;
	ep = c.ep;
	ad = c.ad;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::setName(std::string n)
{
	name = n;
}

void ClapTrap::setModel(std::string n)
{
	model =  n;
}

void ClapTrap::setMaxHp(unsigned int h)
{
	maxHp = h;
}

void ClapTrap::setHp(unsigned int h)
{
	hp = h;
}

void ClapTrap::setEp(unsigned int e)
{
	ep = e;
}

void ClapTrap::setAd(unsigned int a)
{
	ad = a;
}

std::string ClapTrap::getName()
{
	return (name);
}

std::string ClapTrap::getModel()
{
	return (model);
}

unsigned int ClapTrap::getMaxHp()
{
	return (maxHp);
}

unsigned int ClapTrap::getHp()
{
	return (hp);
}

unsigned int ClapTrap::getEp()
{
	return (ep);
}

unsigned int ClapTrap::getAd()
{
	return (ad);
}

void ClapTrap::attack(const std::string &target)
{
	if (!ep)
	{
		std::cout << getModel() << "Trap " << name << " has no more energy..." << std::endl;
		return;
	}
	if (!hp)
	{
		std::cout << getModel() << "Trap " << name << " is dead..." << std::endl;
		return;
	}
	--ep;
	std::cout << getModel() << "Trap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
	std::cout << getModel() << "Trap " << name << " now has " << ep << " energy points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!hp)
	{
		std::cout << getModel() << "Trap " << name << " is already dead... Stop beating a dead " << getModel() << "Trap!" << std::endl;
		return;
	}
	if (hp <= amount)
	{
		hp = 0;
		std::cout << getModel() << "Trap " << name << " has taken " << amount << " points of damage!" << std::endl;
		std::cout << getModel() << "Trap " << name << " has died..." << std::endl;
		return;
	}
	hp -= amount;
	std::cout << getModel() << "Trap " << name << " has taken " << amount << " points of damage!" << std::endl;
	std::cout << getModel() << "Trap " << name << " now has " << hp << " health points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!ep)
	{
		std::cout << getModel() << "Trap " << name << " has no more energy..." << std::endl;
		return;
	}
	if (!hp)
	{
		std::cout << getModel() << "Trap " << name << " is dead..." << std::endl;
		return;
	}
	if (hp + amount > maxHp)
		hp = maxHp;
	else
		hp += amount;
	ep--;
	std::cout << getModel() << "Trap " << name << " has restored " << amount << " health points." << std::endl;
	std::cout << getModel() << "Trap " << name << " now has " << hp << " health points and " << ep << " energy points." << std::endl;
}