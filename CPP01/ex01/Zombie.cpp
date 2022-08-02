#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->name = s;
}

Zombie::Zombie()
{
	this->name = "Arthur";
}

Zombie::~Zombie()
{
	std::cout << this->name << " has succombed to lack of brains." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string s)
{
	this->name = s;
}

std::string Zombie::get_name()
{
	return (this->name);
}