#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector> //m01
# include "atarget.hpp" //m01 m02
# include "aspell.hpp" //m01 m02
# include "spellbook.hpp" //m02

class	Warlock
{
	private:
		std::string	_name;
		std::string	_title;

		std::vector<ASpell *>	_spells;
		SpellBook	_spellBook;

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

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &spellName);
		void	launchSpell(std::string const &spellName, ATarget const &target);
};

#endif