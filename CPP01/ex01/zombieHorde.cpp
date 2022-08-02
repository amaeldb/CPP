#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name);
		//z[i].set_name(z[i].get_name().append(" " + std::to_string(i + 1)));
	}
	return (z);
}