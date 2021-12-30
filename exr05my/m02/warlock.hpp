#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector> //m01 m02
# include "aspell.hpp" //m01 m02
# include "atarget.hpp" //m01 m02
# include "spellbook.hpp" //m02

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		SpellBook	_spellBook; //m02

		Warlock();
		Warlock(Warlock const &other);
		Warlock	&operator=(Warlock const &other);
	public:
		Warlock(std::string const &name, std::string const &title);
		virtual	~Warlock();

		std::string const	&getName(void) const;
		std::string const	&getTitle(void) const;

		void	setTitle(std::string const &title);

		void	introduce(void) const;

		void	learnSpell(ASpell *spell); //m01 m02
		void	forgetSpell(std::string const &spellName); //m01 m02
		void	launchSpell(std::string const &spellName, ATarget const &target); //m01 m02
};

#endif