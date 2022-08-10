#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(std::string n);
		ClapTrap(const ClapTrap &c);
		ClapTrap &operator=(const ClapTrap &c);
		~ClapTrap();

		void setName(std::string n);
		void setModel(std::string m);
		void setMaxHp(unsigned int h);
		void setHp(unsigned int h);
		void setEp(unsigned int e);
		void setAd(unsigned int a);

		std::string getName();
		std::string getModel();
		unsigned int getMaxHp();
		unsigned int getHp();
		unsigned int getEp();
		unsigned int getAd();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string name;
		std::string model;
		unsigned int maxHp;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
};

#endif