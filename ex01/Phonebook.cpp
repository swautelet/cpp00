#include"Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->i = 0;
	int	ind = 0;
	
	// contact list[8];
	while (ind < 8)
	{
		list[ind].setindex(ind + 1);
		ind++;
	}
	// this->list = list;
}

Phonebook::~Phonebook(void)
{

}

void	Phonebook::addcontact(std::string firstname, std::string lastname, std::string nickname, std::string phone, std::string darkestsecret)
{
	this->list[this->i].setnames(firstname, lastname, nickname, phone, darkestsecret);
	this->i++;
	if (this->i >= 8)
	{
		this->i = 0;
	}
}

void Phonebook::searchcontact(char i)
{
	int	convert;

	convert = i - 48;
	if (convert < 1 || convert > 8)
	{
		std::cout << "Invalid contact number" << std::endl;
		return ;
	}
	else
	{
		list[convert - 1].displaycont();
	}
}

void Phonebook::displaylist(void)
{
	for (int i = 0; i < 8; i++)
	{
		list[i].minidisplay();
	}
}