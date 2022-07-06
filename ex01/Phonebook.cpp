#include"Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->i = 0;
	int	ind = 0;
	
	// contact list[8];
	while (ind < 8)
	{
		list[ind].setindex(ind);
		ind++;
	}
	// this->list = list;
}

Phonebook::~Phonebook(void)
{

}

void	Phonebook::addcontact(std::string firstname, std::string lastname, std::string nickname)
{
	this->list[this->i].setnames(firstname, lastname, nickname);
	this->i++;
	if (this->i >= 8)
	{
		this->i = 0;
	}
}

void Phonebook::searchcontact(int i)
{
	if (i < 1 || i > 8)
	{
		std::cout << "Invalid contact number" << std::endl;
		return ;
	}
	else
	{
		list[i].displaycont();
	}
}