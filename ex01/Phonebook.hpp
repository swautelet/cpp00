#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void	addcontact(contact);
		void	searchcontact(int i);

	private:
		contact contacts[8];
		int	i;
};

#endif