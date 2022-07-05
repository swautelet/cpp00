#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class Phonebook {
	public:
		Phonebook();
		~Phonebook();
		void addcontact(contact);
		contact searchcontact(char *str);

	private:
		contact contacts[8];
		int	i;
};

#endif