#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "aspell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph();
		virtual	~Polymorph();

		virtual	ASpell	*clone(void) const;
};

#endif