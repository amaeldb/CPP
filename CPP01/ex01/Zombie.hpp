#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#ifndef EX_HEAD
# define EX_HEAD

#include <iostream>
#include <string>

#endif

class Zombie
{
	public:
		Zombie();
		Zombie(std::string s);
		~Zombie();

		void set_name(std::string s);
		std::string get_name();
		void announce(void);

	private:

		std::string name;
};

#endif
