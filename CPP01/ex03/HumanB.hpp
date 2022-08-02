#ifndef HUMANB_HPP
# define HUMANB_HPP

#ifndef EX_HEAD
# define EX_HEAD

#include <iostream>
#include <string>

#endif

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string s);
		void attack();
		void setWeapon(Weapon &wea);

	private:
		std::string name;
		Weapon *w;
};

#endif