#ifndef CONTACT_HPP
# define CONTACT_HPP

class contact{
	public:
		contact(int i, char *firstna, char *lastna, char *nickna);
		~contact();
		char *firstname;
		void	displaycont();
	private:
		int	index;
		char *lastname;
		char *nickname;
};

#endif