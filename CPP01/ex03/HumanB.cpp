#include "HumanB.hpp"

HumanB::HumanB(std::string s)
 : name(s),w(NULL)
{
}

void HumanB::attack()
{
	if (this->w)
		std::cout << name << " attacks with their " << w->getType() << std::endl;
	else
		std::cout << name << " flails their arms" << std::endl;
}

void HumanB::setWeapon(Weapon &wea)
{
	this->w = &wea;
}