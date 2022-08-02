#include "Harl.hpp"

int main()
{
	std::string s;
	Harl h;
	while (1)
	{
		std::cout << "Ask Harl: ";
		getline(std::cin, s);
		for (int i = 0; i < (int)s.length(); i++)
			s[i] = std::toupper(s[i]);
		if (s == "EXIT")
			return 0;
		h.complain(s);
	}
}