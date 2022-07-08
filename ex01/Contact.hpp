#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class contact{
	public:
		contact();
		~contact();
		void	displaycont();
		void	setindex(int i);
		void	setnames(std::string firstname, std::string lastname, std ::string nickname, std::string phone, std::string darkestsecret);
		void	minidisplay();

	private:
		int	index;
		int	flagset;
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string	phone;
		std::string darkestsecret;
};

#endif