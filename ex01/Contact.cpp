#include "Contact.hpp"

Contact::Contact()
{
	this->e = 1;
}

void Contact::set_first()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->first);
}

void Contact::set_last()
{
	std::cout << "Last name: ";
	std::getline(std::cin, this->last);
}

void Contact::set_nick()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nick);
}

void Contact::set_phone()
{
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone);
}

void Contact::set_secret()
{
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->secret);
}

void Contact::set_all()
{
	set_first();
	set_last();
	set_nick();
	set_phone();
	set_secret();
	this->e = 0;
}

std::string Contact::get_first()
{
	return (this->first);
}

std::string Contact::get_last()
{
	return (this->last);
}

std::string Contact::get_nick()
{
	return (this->nick);
}

std::string Contact::get_phone()
{
	return (this->phone);
}

std::string Contact::get_secret()
{
	return (this->secret);
}

void Contact::display(int ind)
{
	std::string s[3];
	s[0].assign(get_first());
	s[1].assign(get_last());
	s[2].assign(get_nick());
	std::cout << (char)('1' + ind) << "         |";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 9 && s[i].length() > 10)
				std::cout << '.';
			else if ((unsigned long)j < s[i].length())
				std::cout << s[i][j];
			else
				std::cout << ' ';
		}
		if (i < 2)
			std::cout << '|';
	}
	std::cout << std::endl;
}

void Contact::prnt()
{
	std::cout << "First name: " << this->first << std::endl;
	std::cout << "Last name: " << this->last << std::endl;
	std::cout << "Nickname: " << this->nick << std::endl;
	std::cout << "Phone number: " << this->phone << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}
