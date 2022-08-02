#include "replace.hpp"

int main(int ac, char **av)
{
	size_t i;
	int l;
	if (ac != 4)
		return 0;
	std::string s = av[1], s1 = av[2], s2 = av[3];
	std::ifstream f1(s);
	if (!f1.is_open())
		return 0;
	std::ofstream f2(s + ".replace");
	while (std::getline(f1, s))
	{
		l = 1;
		while (l)
		{
			i = s.find(s1);
			if (i != std::string::npos)
			{
				s.erase(i, s1.length());
				s.insert(i, s2);
			}
			else
				l = 0;
		}
		f2 << s << std::endl;
	}
	f1.close();
	f2.close();
}
