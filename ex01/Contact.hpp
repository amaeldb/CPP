#ifndef CONTACT_HPP
# define CONTACT_HPP

#ifndef EX_HEAD
# define EX_HEAD

#include <iostream>
#include <string>

#endif

class Contact
{
	public:
		Contact();
		std::string get_first();
		std::string get_last();
		std::string get_nick();
		std::string get_phone();
		std::string get_secret();

		void set_first();
		void set_last();
		void set_nick();
		void set_phone();
		void set_secret();
		void set_all();

		void display(int ind);
		void prnt();

		int e;
	
	private:
		std::string first;
		std::string last;
		std::string nick;
		std::string phone;
		std::string secret;
};

#endif