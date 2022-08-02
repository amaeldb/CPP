#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &wea)
 : name(s),w(wea)
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}