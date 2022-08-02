#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void set_l(int i);
		int get_l();
		void search();
		void add();
		int f;

	private:
		Contact c[8];
		int l;
};

PhoneBook::PhoneBook()
{
	this->f = 0;
	this->set_l(0);
}

void PhoneBook::set_l(int i)
{
	this->l = i;
}

int PhoneBook::get_l()
{
	return (l);
}

void PhoneBook::add()
{
	if (this->l == 8)
	{
		this->l = 0;
		this->f = 1;
	}
	this->c[this->l].set_all();
	this->l++;
}

void PhoneBook::search()
{
	if (this->c[0].e)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}
	int i = -1;
	std::string s;
	while (++i < 8 && !this->c[i].e)
		this->c[i].display(i);
	std::cout << "Contact index: ";
	std::getline(std::cin, s);
	if (s[0] >= '1' && s[0] <= '8' && s.length() == 1 && !this->c[std::stoi(s) - 1].e)
		this->c[std::stoi(s) - 1].prnt();
	else
	{
		std::cout << "Invalid index, please try again." << std::endl;
		this->search();
	}
}

int main()
{
	PhoneBook pb;
	std::string s;

	while (1)
	{
		std::cout << "PhoneBook: ";
		std::getline(std::cin, s);
		if (!s.compare("ADD"))
			pb.add();
		else if (!s.compare("SEARCH"))
			pb.search();
		else if (!s.compare("EXIT"))
			return 0;
	}
}