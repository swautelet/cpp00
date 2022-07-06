#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class contact{
	public:
		contact();
		~contact();
		void	displaycont();
		void	setindex(int i);
		void	setnames(std::string firstname, std::string lastname, std ::string nickname);

	private:
		int	index;
		std::string firstname;
		std::string lastname;
		std::string nickname;
};

#endif