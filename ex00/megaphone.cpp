#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int i = 0;
	std::string s;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[++i])
		s.append(argv[i]);
	for (i = 0; s[i]; i++)
		s[i] = toupper(s[i]);
	std::cout << s << std::endl;
	return 0;
}
