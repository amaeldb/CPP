#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
	this->type = s;
}

void Weapon::setType(std::string s)
{
	this->type = s;
}

const std::string &Weapon::getType()
{
	std::string &ret = this->type;
	return (ret);
}