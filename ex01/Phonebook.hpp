#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <string>

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void	addcontact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestsecret);
		void	searchcontact(int i);

	private:
		contact list[8];
		int	i;
};

#endif