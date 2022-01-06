#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "atarget.hpp"

class	Dummy : public ATarget
{
	public:
		Dummy();
		virtual	~Dummy();

		virtual ATarget	*clone(void) const;
};

#endif