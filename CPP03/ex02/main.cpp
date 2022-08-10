#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void printline()
{
	std::cout << std::endl << "------------------------------------------------------" << std::endl << std::endl;
}

void details(ClapTrap &f)
{
	std::cout << f.getModel() << "Trap: " << f.getName() << std::endl;
	std::cout << "Health Points: " << f.getHp() << "/" << f.getMaxHp() << std::endl;
	std::cout << "Energy Points: " << f.getEp() << std::endl;
	std::cout << "Attack Damage: " << f.getAd() << std::endl;
}

int main()
{
	FragTrap cp1("FR4G-TP");
	printline();
	FragTrap cp2(cp1);
	printline();
	FragTrap cp3("Jack");
	cp3 = cp2;
	printline();
	details(cp1);
	printline();
	details(cp2);
	printline();
	details(cp3);
	printline();

	cp1.attack("stairs");
	cp1.takeDamage(3);
	cp1.beRepaired(2);
	cp1.highFiveGuys();
	details(cp1);
	printline();

	cp2.setEp(0);
	cp2.attack("Captain Flynt");
	cp2.beRepaired(1);
	details(cp2);
	printline();

	cp3.takeDamage(101);
	cp3.attack("Knuckle Dragger");
	cp3.takeDamage(1);
	cp3.beRepaired(10);
	cp3.highFiveGuys();
	details(cp3);
	printline();
}