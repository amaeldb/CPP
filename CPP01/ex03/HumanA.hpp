#ifndef HUMANA_HPP
# define HUMANA_HPP

#ifndef EX_HEAD
# define EX_HEAD

#include <iostream>
#include <string>

#endif

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string s, Weapon &wea);
		void attack();

	private:
		std::string name;
		Weapon &w;
};

#endif