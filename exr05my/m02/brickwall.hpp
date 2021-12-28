#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "atarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		virtual	~BrickWall();

		virtual	ATarget *clone(void) const;
};

#endif