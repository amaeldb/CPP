#ifndef WEAPON_HPP
# define WEAPON_HPP

#ifndef EX_HEAD
# define EX_HEAD

#include <iostream>
#include <string>

#endif

class Weapon
{
	public:
		Weapon(std::string s);
		const std::string &getType();
		void setType(std::string s);
	
	private:
		std::string type;
};

#endif