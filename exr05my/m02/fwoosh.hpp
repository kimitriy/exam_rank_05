#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "aspell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		virtual ~Fwoosh();

		virtual ASpell *clone(void) const;
};

#endif