#include "contact.hpp"

contact::contact(int i, char *firstna, char *lastna, char *nickna) index(i), firstname(firstna), lastna(lastname), nickname(nickna)
{
	return ;
}

contact::~contact(void)
{
	return ;
}

void	contact::displaycont(void)
{
	std::cout << this->index << std::endl;
	std::cout << this->firstname << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << this->nickname << std::endl;
}