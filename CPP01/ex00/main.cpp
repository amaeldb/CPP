#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie *z1 = newZombie("Jeeves"), *z2 = newZombie("Katie");
	z1->announce();
	z2->announce();
	delete z1;

	randomChump("Barnabe");
	randomChump("Karl");

	z2->announce();
	delete z2;
}