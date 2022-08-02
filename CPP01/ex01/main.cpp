#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	int n = 5;
	Zombie *z = zombieHorde(n, "Stewie");
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete[] z;
}