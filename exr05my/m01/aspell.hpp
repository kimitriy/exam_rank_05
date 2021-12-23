#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell
{
	private:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		ASpell(ASpell const &other);
		virtual ~ASpell();

		ASpell	&operator=(ASpell const &other);

		std::string const	&getName(void) const;
		std::string const	&getEffects(void) const;

		void	launch(ATarget const &target) const;
		virtual ASpell	*clone(void) const = 0;
};

# include "atarget.hpp"

#endif